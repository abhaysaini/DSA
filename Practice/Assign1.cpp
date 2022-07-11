// #include <bits/stdc++.h>
// using namespace std;
// class box
// {
// public:
//     void area(int l, int b, int h)
//     {
//         cout << 2 * (l * b + b * h + l * h) <<endl;
//     }
//     void volume(int l, int b, int h)
//     {
//         cout << l * b * h <<endl;
//     }
//     box() {}
// };
// int main()
// {
//     box a;
//     a.area(5,6,7);
//     a.volume(5,5,5);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class employee
// {
// public:
//     int net_salary, da, i_tax, hra = 600;
//     void accept(int salary)
//     {
//         da = 0.20 * salary;
//         i_tax = 0.15 * salary;
//         net_salary = salary + da + hra - i_tax;
//         display();
//     }
//     void display()
//     {
//         cout << "HRA of employee is: " << hra << endl;
//         cout << "DA of employee is: " << da << endl;
//         cout << "Income tax : " << i_tax << endl;
//         cout << "The net salary of employee is: " << net_salary << endl;
//     }
// };
// int main()
// {
//     int id, salary;
//     string name;
//     cout << "Enter Employee id:"<<endl;
//     cin >> id;
//     cout << "Enter name of employee:"<<endl;
//     cin >> name;
//     employee emp;
//     emp.accept(200000);
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 1000
// class shoppingList
// {
//     int code;

// public:
//     int a[MAX];
//     shoppingList()
//     {
//         code = -1;
//     }
//     bool add(int x);
//     int deletion();
//     int peek();
//     bool isEmpty();
// };
// bool shoppingList::add(int x)
// {
//     if (code >= (MAX - 1))
//     {
//         cout << "Limit of shopping list is achieved"<<endl;
//         return false;
//     }
//     else
//     {
//         a[++code] = x;
//         cout << x << " is added to the list"<<endl;
//         return true;
//     }
// }
// int shoppingList::deletion()
// {
//     if (code < 0)
//     {
//         cout << "Enter valid code number of item"<<endl;
//         return 0;
//     }
//     else
//     {
//         int x = a[code--];
//         return x;
//     }
// }
// int shoppingList::peek()
// {
//     if (code < 0)
//     {
//         cout << "List is Empty"<<endl;
//         return 0;
//     }
//     else
//     {
//         int x = a[code];
//         return x;
//     }
// }
// bool shoppingList::isEmpty()
// {
//     return (code < 0);
// }
// int main()
// {
//     class shoppingList sl;
//     sl.add(100);
//     sl.add(101);
//     sl.add(102);
//     sl.add(103);
//     sl.add(104);
//     cout << sl.deletion() << " item is deleted from the list"<<endl;
//     cout << "Items in the list are: ";
//     while (!sl.isEmpty())
//     {
//         cout << sl.peek() << " ";
//         sl.deletion();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// class Car
// {
// private:
//     int car_id;
//     string car_name;
//     int rate;

// public:
//     static int static_member;
//     Car()
//     {
//         static_member++;
//     }
//     void input()
//     {
//         cout << "Enter the id of the car"<<endl;
//         cin >> car_id;
//         cout << "Enter name of the car"<<endl;
//         cin >> car_name;
//         cout << "Rate the car"<<endl;
//         cin >> rate;
//     }
//     void display()
//     {
//         cout << "Car id is: " << car_id <<endl;
//         cout << "Car name is: " << car_name <<endl;
//         cout << "Rating of the car is: " << rate << endl;
//     }
// };
// int Car::static_member = 0;
// int main()
// {
//     Car c1, c2;
//     c1.input();
//     c1.display();
//     c2.input();
//     c2.display();
//     cout << "Number of objects created is: " << Car::static_member << "\n";
// }

// #include <bits/stdc++.h>
// using namespace std;
// class addition
// {
// public:
//     void time(int t1, int m1, int t2, int m2)
//     {
//         int t = t1 + t2;
//         int m = m1 + m2;
//         if (m >= 60)
//         {
//             t += m / 60;
//             m = m % 60;
//         }
//         cout << "New time: " << t << " hour:" << m << " minute";
//     }
// };
// int main()
// {
//     addition add;
//     int t1, m1, t2, m2;
//     cout << "Enter time in hour for t1: ";
//     cin >> t1;
//     cout << "Enter minute: ";
//     cin >> m1;
//     cout << "Enter time in hour for t2: ";
//     cin >> t2;
//     cout << "Enter minute: ";
//     cin >> m2;
//     add.time(t1, m1, t2, m2);
// }
// Round Robin Scheduling

#include <bits/stdc++.h>
using namespace std;
class process
{
public:
    int arrival_time;
    int burst_time;
    int priority;
    int original_burst_time;
    int waiting_time;
    int turn_around_time;
    int completion_time;
    bool status = false;
};
void display(class process a[], int size)
{
    cout << setw(15) << "Arrival Time" << setw(15) << "Burst Time" << setw(15) << "Priority Time" << setw(15) << "Waiting Time" << setw(20) << "Turn Around Time" << setw(20) << "Completion Time" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(15) << a[i].arrival_time << setw(15) << a[i].original_burst_time << setw(15) << a[i].priority << setw(15) << a[i].waiting_time << setw(20) << a[i].turn_around_time << setw(20) << a[i].completion_time << endl;
    }
}
bool ValueCmp(process const &a, process const &b)
{
    return a.arrival_time < b.arrival_time;
}
bool Run(class process a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!a[i].status)
        {
            return false;
        }
    }
    return true;
}
int nextProcess(class process a[], int size, int t)
{
    int index = 0, first = 1, priority;
    for (int i = 0; i < size; i++)
    {
        if (a[i].status == false && a[i].arrival_time <= t)
        {
            if (first)
            {
                first = 0;
                priority = a[i].priority;
                index = i;
            }
            else if (a[i].priority < priority)
            {
                priority = a[i].priority;
                index = i;
            }
        }
    }
    return index;
}
int main()
{
    int no_of_process;
    float TAT = 0, WT = 0;
    cout << "Enter no of processes:-";
    cin >> no_of_process;
    process arr[no_of_process];
    for (int i = 0; i < no_of_process; i++)
    {
        cout << "Enter arrival time of process " << i + 1 << " :-";
        cin >> arr[i].arrival_time;
        cout << "Enter burst time of process " << i + 1 << " :-";
        cin >> arr[i].burst_time;
        arr[i].original_burst_time = arr[i].burst_time;
        cout << "Enter priority of process " << i + 1 << " :-";
        cin >> arr[i].priority;
    }
    std::sort(arr, arr + no_of_process, ValueCmp);
    int currentTime = arr[0].arrival_time;
    // Priority Pre-emptive schedulting code
    while (!Run(arr, no_of_process))
    {
        int i = nextProcess(arr, no_of_process, currentTime);
        arr[i].burst_time--;
        currentTime++;
        if (arr[i].burst_time == 0)
        {
            arr[i].completion_time = currentTime;
            arr[i].status = true;
            arr[i].turn_around_time = arr[i].completion_time - arr[i].arrival_time;
            TAT += arr[i].turn_around_time;
            arr[i].waiting_time = arr[i].turn_around_time - arr[i].original_burst_time;
            WT += arr[i].waiting_time;
        }
    }
    display(arr, no_of_process);
    cout << "Average Turn around time for Priority (Pre-emptive) Algo:-" << (TAT / no_of_process) << endl;
    cout << "Average Waiting time for Priority (Pre-emptive) Algo:-" << (WT / no_of_process) << endl;
    return 0;
}

// class process
// {
// public:
//     int arrival_time;
//     int burst_time;
//     int priority;
//     int waiting_time;
//     int turn_around_time;
//     int completion_time;
//     bool status = false;
// };
// void display(class process a[], int size)
// {
//     cout << setw(15) << "Arrival Time" << setw(15) << "Burst Time" << setw(15) << "Priority Time" << setw(15) << "Waiting Time" << setw(20) << "Turn Around Time" << setw(20) << "Completion Time" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << setw(15) << a[i].arrival_time << setw(15) << a[i].burst_time << setw(15) << a[i].priority << setw(15) << a[i].waiting_time << setw(20) << a[i].turn_around_time << setw(20) << a[i].completion_time << endl;
//     }
// }
// bool ValueCmp(process const &a, process const &b)
// {
//     return a.arrival_time < b.arrival_time;
// }
// bool Run(class process a[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (!a[i].status)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int nextProcess(class process a[], int size, int t)
// {
//     int index = 0, first = 1, priority;
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i].status == false && a[i].arrival_time <= t)
//         {
//             if (first)
//             {
//                 first = 0;
//                 priority = a[i].priority;
//                 index = i;
//             }
//             else if (a[i].priority < priority)
//             {
//                 priority = a[i].priority;
//                 index = i;
//             }
//         }
//     }
//     return index;
// }
// int main()
// {
//     int no_of_process;
//     float TAT = 0, WT = 0;
//     cout << "Enter no of processes:-";
//     cin >> no_of_process;
//     process arr[no_of_process];
//     for (int i = 0; i < no_of_process; i++)
//     {
//         cout << "Enter arrival time of process " << i + 1 << " :-";
//         cin >> arr[i].arrival_time;
//         cout << "Enter burst time of process " << i + 1 << " :-";
//         cin >> arr[i].burst_time;
//         cout << "Enter priority of process " << i + 1 << " :-";
//         cin >> arr[i].priority;
//     }
//     std::sort(arr, arr + no_of_process, ValueCmp);
//     int currentTime = arr[0].arrival_time;

//     while (!Run(arr, no_of_process))
//     {
//         int i = nextProcess(arr, no_of_process, currentTime);
//         arr[i].completion_time = currentTime + arr[i].burst_time;
//         arr[i].status = true;
//         currentTime += arr[i].burst_time;
//         arr[i].turn_around_time = arr[i].completion_time - arr[i].arrival_time;
//         arr[i].waiting_time = arr[i].turn_around_time - arr[i].burst_time;
//         TAT += arr[i].turn_around_time;
//         WT += arr[i].waiting_time;
//     }

//     display(arr, no_of_process);
//     cout << "Average Turn around time for Priority (Non-Preemptive) Algo:-" << (TAT / no_of_process) << endl;
//     cout << "Average Waiting time for Priority (Non-Preemptive) Algo:-" << (WT / no_of_process) << endl;
//     return 0;
// }
// class process
// {
// public:
//     int arrival_time;
//     int original_arrival_time;
//     int burst_time;
//     int original_burst_time;
//     int waiting_time;
//     int turn_around_time;
//     int completion_time;
//     bool status = false;
// };
// void display(class process a[], int size)
// {
//     cout << setw(15) << "Arrival Time" << setw(15) << "Burst Time" << setw(15) << "Waiting Time" << setw(20) << "Turn Around Time" << setw(20) << "Completion Time" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << setw(15) << a[i].original_arrival_time << setw(15) << a[i].original_burst_time << setw(15) << a[i].waiting_time << setw(20) << a[i].turn_around_time << setw(20) << a[i].completion_time << endl;
//     }
// }
// bool ValueCmp(process const &a, process const &b)
// {
//     return a.arrival_time < b.arrival_time;
// }
// bool OrigValueCmp(process const &a, process const &b)
// {
//     return a.original_arrival_time < b.original_arrival_time;
// }
// bool Run(class process a[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (!a[i].status)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int no_of_process, quantum = 0;
//     float TAT = 0, WT = 0;
//     cout << "Enter quantaum value:-";
//     cin >> quantum;
//     cout << "Enter no of processes:-";
//     cin >> no_of_process;
//     process arr[no_of_process];
//     for (int i = 0; i < no_of_process; i++)
//     {
//         cout << "Enter arrival time of process " << i + 1 << " :-";
//         cin >> arr[i].arrival_time;
//         arr[i].original_arrival_time = arr[i].arrival_time;
//         cout << "Enter burst time of process " << i + 1 << " :-";
//         cin >> arr[i].burst_time;
//         arr[i].original_burst_time = arr[i].burst_time;
//     }
//     std::sort(arr, arr + no_of_process, ValueCmp);
//     int currentTime = arr[0].arrival_time;
//     int i = 0;
//     while (!Run(arr, no_of_process))
//     {
//         if (arr[i].status == false && currentTime >= arr[i].arrival_time)
//         {
//             if (arr[i].burst_time > quantum)
//             {
//                 currentTime += quantum;
//                 arr[i].burst_time -= quantum;
//                 arr[i].arrival_time = currentTime + 1;
//                 std::sort(arr, arr + no_of_process, ValueCmp);
//             }
//             else
//             {
//                 while (arr[i].burst_time > 0)
//                 {
//                     currentTime++;
//                     arr[i].burst_time--;
//                 }
//                 arr[i].completion_time = currentTime;
//                 arr[i].turn_around_time = arr[i].completion_time - arr[i].original_arrival_time;
//                 arr[i].waiting_time = arr[i].turn_around_time - arr[i].original_burst_time;
//                 TAT += arr[i].turn_around_time;
//                 WT += arr[i].waiting_time;
//                 arr[i].status = true;
//                 i++;
//             }
//         }
//     }
//     std::sort(arr, arr + no_of_process, OrigValueCmp);
//     display(arr, no_of_process);
//     cout << "Average Turn around time for Round Robin Algo:-" << (TAT / no_of_process) << endl;
//     cout << "Average Waiting time for Round Robin Algo:-" << (WT / no_of_process) << endl;
//     return 0;
// }

