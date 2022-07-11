#include <bits/stdc++.h>
using namespace std;

// void mergesort(int a[], int l, int mid, int h)
// {
//     int i = l, j = mid + 1, x = l;
//     int m[100];
//     while (i <= mid && j <= h)
//     {
//         if (a[i] < a[j])
//         {
//             m[x++] = a[i++];
//         }
//         else
//         {
//             m[x++] = a[j++];
//         }
//     }
//     for (; i <= mid; i++)
//         m[x++] = a[i];
//     for (; j <= h; j++)
//         m[x++] = a[j];

//     for (i = l; i <= h; i++)
//         a[i] = m[i];
// }

// void divide(int a[], int l, int h)
// {
//     int mid;
//     if (l < h)
//     {
//         mid = l + h / 2;
//         divide(a, l, mid);
//         divide(a, mid + 1, h);
//         mergesort(a, l, mid, h);
//     }
// }
// int main()
// {
//     int a[] = {6, 3, 9, 5, 2, 8}, n = 6;
//     divide(a, 0, n);
// for (int i = 0; i < n; i++)
// {
//     cout << a[i] << " ";
// }
// cout << endl;
//     return 0;
// }

// void Merge(int A[], int l, int mid, int h)
// {
//     int i = l, j = mid + 1, k = l;
//     int B[100];

//     while (i <= mid && j <= h)
//     {
//         if (A[i] < A[j])
//             B[k++] = A[i++];
//         else
//             B[k++] = A[j++];
//     }
//     for (; i <= mid; i++)
//         B[k++] = A[i];
//     for (; j <= h; j++)
//         B[k++] = A[j];

//     for (i = l; i <= h; i++)
//         A[i] = B[i];
// }
// void MergeSort(int A[], int l, int h)
// {
//     int mid;
//     if (l < h)
//     {
//         mid = (l + h) / 2;
//         MergeSort(A, l, mid);
//         MergeSort(A, mid + 1, h);
//         Merge(A, l, mid, h);
//     }
// }
// int main()
// {
//     int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

//     MergeSort(A,0, n);

//     // for (i = 0; i < 10; i++)
//     //     printf("%d ", A[i]);
//     // printf("\n");
//     for (int i = 0; i < 10; i++)
// {
//     cout << A[i] << " ";
// }
// cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t=6;
//     // cin>>t;
//     while(t--){
//         int n=5;
//         // cin>>n;
//         for(int i =0;i<n;i++){
//             cout<< i <<" ";
//         }
//     }
//     return 0;
// }

// C++ program for finding postorder
// traversal of BST from preorder traversal
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   vector<string> v(n);
//   for (int i = 0; i < n; i++)
//   {
//     string y;
//     cin >> y;
//     v.push_back(y);
//   }
//   int count = 0;
//   for (int i = 0; i < n; i++)
//   {
//     string s = v[i];
//     int flag = 1;
//     for (int j = 0; j < s.size() - 1; j++)
//     {
//       if (s[i] == s[i + 1])
//       {
//         flag = 0;
//         break;
//       }
//     }
//     if (flag)
//     {
//       count++;
//     }
//   }
//   cout << (count) % 1000000007 << endl;
//   return 0;
// }

#include <bits/stdc++.h>
#define FA ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
  FA;
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    while (a || b)
    {
      if (a)
        cout << 0, a--;
      if (b)
        cout << 1, b--;
    }
    cout << '\n';
  }
}