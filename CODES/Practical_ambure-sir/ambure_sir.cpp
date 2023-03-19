// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[10],i,min[10];
//     // printf("Enter the number\n");
//     cout<<"Enter the number\n";
//     for (int i = 0; i < 10; i++)
//     {
//         cin>>a[i];
//     }
//     min[0] = a[0];
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] < min[0])
//         {
//             min[0] = a[i];
//         }
//     }
//     cout<<"the min is "<<min<<endl;
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int a;
    int b[a];
    int size = sizeof(b) / sizeof(int);
    for (int i = 0; i < 8779897; i++)
    {
        cout<<b[i]<<endl;
    }
    
    cout<<"the a[0] is "<<b[0]<<endl;
    return 0;
}