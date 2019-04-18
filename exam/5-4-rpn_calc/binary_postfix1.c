#include <stdio.h>
#include <stdlib.h>

//#define NULL '\0'

// https://www.sanfoundry.com/cpp-program-construct-expression-tree-postfix-expression/

int ft_atoi(char *str)
{
  	int i;
  	int sign;
  	int base;

  	i = 0;
  	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		{
    	i++;
    }
  	sign = 1;
  	if (str[i] == '-' || str[i] == '+')
    {
			sign = 1 - 2 * (str[i++] == '-');
    }
  	base = 0;
  	while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      	base = base * 10 + (str[i++] - '0');
    }
  	return (sign * base);
}

typedef struct s_node
{
    char data;
    struct s_node *left;
    struct s_node *right;
}   node;

char postfix[35];
int top = -1;
node *arr[35];

int s_top = -1;
int stack[35];

void s_push(int num)
{
    s_top++;
    stack[s_top] = num;
}

int s_pop()
{
    s_top--;
    return(stack[s_top++]);
}


// -1 if operator // +1 if alphabet
int r(char inputchar)
{
    if (inputchar == '+' || inputchar == '-' || inputchar == '*' || inputchar == '/')
        return (-1);
    else if (inputchar >= '0' && inputchar <= '9')
        return (1);
    //else if (inputchar >= 'A' || inputchar <= 'Z')
    //    return (1);
    else
        return (-99);    
}

void push(node *tree)
{
    top++;
    arr[top] = tree; // the node address goes on stack!!!
}

node *pop()
{
    top--;
    return (arr[top + 1]);
}

node *create_expr_tree(char *suffix) // suffix is av[1]
{
    int i;
    char symbol;
    node *newl;
    node *ptr1;
    node *ptr2;

    int flag; // flag=-1 when operator // flag=1 when operand


    //printf("\nHEY  %c", suffix[0]);
    symbol = suffix[0]; // 1st char from postfix expr

    i = 1;
    while (symbol != '\0')
    {
        flag = r(symbol); // operand or operator
        if (flag == 1) // if operand, then push
        {
            newl = (node *)malloc(sizeof(node));
            newl->data = symbol;
            newl->left = NULL;
            newl->right = NULL;
            printf("\n333NODE_NUM  %c", symbol);
            
            push(newl);
        }
        else // if operator, pop two
        {
            ptr1 = pop();
            ptr2 = pop();
            newl = (node *)malloc(sizeof(node));
            newl->data = symbol;
            newl->left = ptr2;
            newl->right = ptr1;

            push(newl);
            printf("\n333OPERATOR  %c  %p  %c  %c", symbol, arr[0], arr[0]->data, arr[0]->left->data);

        }
        symbol = suffix[i];
        i++;
    }
    printf("\n333OPERATOR  %c  %p  %c  %c", symbol, arr[0], arr[0]->data, arr[0]->left->data);
    return (arr[0]);
}

void preOrder(node *tree)
{
    if (tree != '\0')
    {
        printf("%c", tree->data);
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void inOrder(node *tree)
{
    if (tree != '\0')
    {
        inOrder(tree->left);
        printf("%c", tree->data);
        inOrder(tree->right);
    }
}

void postOrder(node *tree)
{
    if (tree != '\0')
    {
        postOrder(tree->left);
        postOrder(tree->right);
        printf("%c", tree->data);
    }
}

int math(node *newl)
{
    if (newl->data == '+')
        return (newl->left->data + newl->right->data);
    if (newl->data == '*')
        return (newl->left->data * newl->right->data);
    return (0);
}

int postOrderEval(node *tree)
{
    char symbol;
    int flag;
    int result = 0;
    //node *newl;
    int n1;
    int n2;

    if (tree != '\0')
    {
        postOrder(tree->left);
        postOrder(tree->right);
        
        symbol = tree->data;
        flag = r(symbol); // operand or operator
        printf("\n222aFLAG  %c", symbol);

        if (flag == 1) // if operand, then push
        {
            //newl = (node *)malloc(sizeof(node));
            //newl->data = symbol;
            //newl->left = NULL;
            //newl->right = NULL;
            printf("\n222a  %c", symbol);
            s_push(symbol - '0');
        }
        else // if operator, pop two
        {
            n1 = s_pop();
            n2 = s_pop();
            
            //printf("\n222  %p   %p", ptr1, ptr2);
            //printf("\n222  %c   %c", ptr1->data, ptr2->data);
            //printf("\n222  %d   %d", ft_atoi(ptr1->data), ft_atoi(ptr2->data));
            
            //newl = (node *)malloc(sizeof(node));
            //newl->data = symbol;
            //newl->left = ptr2;
            //newl->right = ptr1;
            /*
            newl->data = math(newl); 
            newl->left = NULL;
            newl->right = NULL;
            */
            result = n1 + n2;
            s_push(result);
        }
    }
    return (result);
}

int main(int ac, char **av)
{
    node *root;

    if (ac != 2)
        return (0);

    printf("\n111Enter Postfix Expression:  %s\n", av[1]);

    // postfix is also av[1]
    root = create_expr_tree(av[1]);
    printf("\n333OPERATOR  %p  %c  %c", arr[0], arr[0]->data, arr[0]->left->data);
    printf("\n333OPERATOR  %p  %c", arr[0], arr[0]->left->data);

    printf("\n111ROOTa  %p  %c", arr[0], arr[0]->left->left->data);
    printf("\nOPERA  %p  %c", arr[0], arr[0]->data);
    printf("\nOPERA  %p  %c", arr[0], arr[0]->data);
    
    //printf("\n333OPERATOR2  %p  %c", root, root->data);


    //inOrder(arr[0]);
    //printf("\n");    
    //preOrder(arr[0]);
    //printf("\n");
    //postOrder(arr[0]);
    //printf("\n");

    printf("\n111RESULT  %d", postOrderEval(arr[0]));
    return (0);
}

/*

int math(node *newl)
{
    if (newl->data == '+')
        return (newl->left->data + newl->right->data);
    if (newl->data == '*')
        return (newl->left->data * newl->right->data);
    return (0);
}

*/