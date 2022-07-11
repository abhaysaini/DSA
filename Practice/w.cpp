#include <bits/stdc++.h>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int a[], int n)
// {
//     first = new Node;
//     struct Node *t, *last;
//     first->data = a[0];
//     first->next = NULL;
//     last = first;

//     for (int i = 1; i <= n; i++)
//     {
//         t = new Node;
//         t->data = a[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
//     last->next = first;
// }

// void display(struct Node *p)
// {
//     do
//     {
//         cout << p->data << " ";
//         p = p->next;
//     } while (p->next != first);

//     // while (p!=NULL)
//     // {
//     //     cout << p->data << " ";
//     //     p = p->next;
//     // }
// }

// int checkLoop(struct Node *f)
// {
//     struct Node *q, *p;
//     q = p = f;
//     do
//     {
//         p = p->next;
//         q = q->next;
//         q = q ? q = q->next : q;
//     } while (p != q && p && q);

//     if (p == q)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int count(struct Node *p)
// {
//     int i = 0;
//     do
//     {
//         i++;
//         p = p->next;
//     } while (p != first);
//     return i;
// }

// void insertion(struct Node *p, int index, int x)
// {
//     struct Node *t;
//     if (index < 0 || index > count(p))
//     {
//         exit(0);
//     }

//     if (index == 0)
//     {
//         t = new Node;
//         t->data = x;
//         if (first == NULL)
//         {
//             first = t;
//             first->next = first;
//         }

//         else
//         {
//             while (p->next != first)
//             {
//                 p = p->next;
//             }
//             p->next = t;
//             t->next = first;
//             first = t;
//         }
//     }
//     else
//     {
//         t = new Node;
//         for (int i = 0; i < index - 1; i++)
//         {
//             p = p->next;
//         }
//         t->data = x;
//         t->next = p->next;
//         p->next = t;
//     }
// }

// int Delete(struct Node *p, int index)
// {
//     struct Node *q;
//     int x;
//     if (index < 0 || index > count(p))
//     {
//         exit(0);
//     }
//     if (index == 1)
//     {
//         x = first->data;
//         while (p->next != first)
//         {
//             p = p->next;
//         }
//         if (first == p)
//         {
//             free(first);
//             first = NULL;
//         }
//         else
//         {
//             p->next = first->next;
//             free(first);
//             first = p->next;
//         }
//         return x;
//     }
//     else
//     {
//         for (int i = 0; i < index - 2; i++)
//         {
//             p = p->next;
//         }
//         q = p->next;
//         p->next = q->next;
//         x = q->data;
//         free(q);
//     }
// }

// int main()
// {
//     int a[] = {1, 2, 4, 2, 5, 6};
//     int n = sizeof(a) / sizeof(a[0]);
//     create(a, n);
//     display(first);
//     int x = checkLoop(first);
//     if (x == 1)
//     {
//         cout << "\nYes it contain a loop!" << endl;
//     }
//     else
//     {
//         cout << "\nNo! it does't contain a loop." << endl;
//     }

//     insertion(first, 3, 90);
//     display(first);

//     int w;
//     cout << "\nEnter the element to be deleted according to index:-" << endl;
//     cin >> w;
//     Delete(first, w);
//     display(first);
//     return 0;
// }

//  - - - - - - - - - - - - - - - - - - - BUBBLE SORT  - - - - - - - - -  - - - - - - - - - - - - -  -- -  - - - --

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void Bubblesort(int A[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (A[j] > A[j + 1])
//             {
//                 swap(&A[j], &A[j + 1]);
//                 flag = 1;
//             }
//         }
//         if(flag == 0){
//             break;
//         }
//     }
// }

// int main()
// {
//     int A[] = {5,20,13,1,55,6,2,8,10};
//     int n = sizeof(A) / sizeof(A[0]);
//     Bubblesort(A, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<A[i]<<" ";
//     }
//     return 0;
// }

//- - - - - - - - - - - - - - - - - - -  - - INSERTION SORT - - - - - - - - - - - - - - - - - - - - - - - -

// void insertion(int A[], int n)
// {

//     for (int i = 1; i < n; i++)
//     {
//         int j = i - 1;
//         int x = A[i];
//         while (j> -1&&A[j] > x)
//         {
//             A[j + 1] = A[j];
//             j--;
//         }
//         A[j + 1] = x;
//     }
// }

// int main()
// {
//     int A[] = {2, 10, 4, 12, 45, 1, 3};
//     int n = sizeof(A) / sizeof(A[0]);
//     cout<<"----------Normal---------"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     insertion(A, n);
//     cout<<"\n----------After Changes--------"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     return 0;
// }

void insertion(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = A[i];
       while (j> -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
int main()
{
    int A[] = {23, 14, 2, 45, 1, 10, 11, 20};
    int n = sizeof(A) / sizeof(A[0]);
    insertion(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}