#include <stdio.h>
#include <stdlib.h>

//#define NULL '\0'

// https://www.sanfoundry.com/cpp-program-construct-expression-tree-postfix-expression/

typedef struct s_node
{
    char data;
    struct s_node *left;
    struct s_node *right;
}   node;

char postfix[35];
int top = -1;
node *arr[35];

int r(char inputchar)
{
    if (inputchar == '+' || inputchar == '-' || inputchar == '*' || inputchar == '/')
        return (-1);
    else if (inputchar >= 'a' || inputchar <= 'z')
        return (1);
    else if (inputchar >= 'A' || inputchar <= 'Z')
        return (1);
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

void create_expr_tree(char *suffix)
{
    int i;
    char symbol;
    node *newl;
    node *ptr1;
    node *ptr2;

    int flag; // flag=-1 when operator // flag=1 when operand

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
        }
        symbol = suffix[i];
        i++;
    }
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

int main(int ac, char **av)
{
    if (ac != 2)
        return (0);

    printf("\nEnter Postfix Expression:  %s\n", av[1]);

    // postfix is also av[1]
    create_expr_tree(av[1]);
    printf("\n");
    inOrder(arr[0]);
    printf("\n");    
    preOrder(arr[0]);
    printf("\n");
    postOrder(arr[0]);
    printf("\n");

    return (0);
}