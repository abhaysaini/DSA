
// - - -- -  -- - - - - - - - - -  -First come first serve Scheduling - - - - - -  - - - - - - -
// #include <iostream>
// using namespace std;
// void findWaitingTime(int processes[], int n, int bt[], int wt[])
// {
//     wt[0] = 0;
//     for (int i = 1; i < n; i++)
//         wt[i] = bt[i - 1] + wt[i - 1];
// }
// void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[])
// {
//     for (int i = 0; i < n; i++)
//         tat[i] = bt[i] + wt[i];
// }
// void findavgTime(int processes[], int n, int bt[])
// {
//     int wt[n], tat[n], total_wt = 0, total_tat = 0;
//     findWaitingTime(processes, n, bt, wt);
//     findTurnAroundTime(processes, n, bt, wt, tat);
//     cout << "Processes "
//          << " Burst time "
//          << " Waiting time "
//          << " Turn around time" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         total_wt = total_wt + wt[i];
//         total_tat = total_tat + tat[i];
//         cout << " " << i + 1 << "\t\t" << bt[i] << "\t " << wt[i] << "\t\t " << tat[i] << endl;
//     }
//     cout << "Average waiting time = " << (float)total_wt / (float)n;
//     cout << endl
//          << "Average turn around time = " << (float)total_tat / (float)n;
// }
// int main()
// {
//     int processes[] = {1, 2, 3, 4};
//     int n = sizeof processes / sizeof processes[0];
//     int burst_time[] = {2,2,3,4};
//     findavgTime(processes, n, burst_time);
//     return 0;
// }
// // #include <bits/stdc++.h>
// // using namespace std;
// // struct process
// // {
// //     int pid;
// //     int at;
// //     int bt;
// //     int start_time;
// //     int ct;
// //     int tat;
// //     int wt;
// // };
// // bool compareArrival(process p1, process p2)
// // {
// //     return p1.at < p2.at;
// // }
// // bool compareID(process p1, process p2)
// // {
// //     return p1.pid < p2.pid;
// // }
// // int main()
// // {
// //     int n;
// //     struct process p[50];
// //     float avg_tat;
// //     float avg_wt;
// //     int total_tat = 0;
// //     int total_wt = 0;
// //     cout << "Enter the number of processes: ";
// //     cin >> n;
// //     cout << endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << "Enter arrival time of process " << i + 1 << ": ";
// //         cin >> p[i].at;
// //         cout << "Enter burst time of process " << i + 1 << ": ";
// //         cin >> p[i].bt;
// //         p[i].pid = i + 1;
// //         cout << endl;
// //     }
// //     sort(p, p + n, compareArrival);
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (i == 0)
// //             p[i].start_time = p[i].at;
// //         else
// //             p[i].start_time = max(p[i - 1].ct, p[i].at);
// //         p[i].ct = p[i].start_time + p[i].bt;
// //         p[i].tat = p[i].ct - p[i].at;
// //         p[i].wt = p[i].tat - p[i].bt;
// //         total_tat += p[i].tat;
// //         total_wt += p[i].wt;
// //     }
// //     avg_tat = (float)total_tat / n;
// //     avg_wt = (float)total_wt / n;
// //     sort(p, p + n, compareID);
// //     cout << endl;
// //     cout << "Pid\t"
// //          << "AT\t"
// //          << "BT\t"
// //          << "ST\t"
// //          << "CT\t"
// //          << "TAT\t"
// //          << "WT\t"
// //          << endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << p[i].pid << "\t" << p[i].at << "\t" << p[i].bt << "\t" << p[i].start_time << "\t" << p[i].ct << "\t" << p[i].tat << "\t" << p[i].wt
// //              << "\n"
// //              << endl;
// //     }
// //     cout << "Average Turnaround Time = " << avg_tat << endl;
// //     cout << "Average Waiting Time = " << avg_wt << endl;
// //     return 0;
// // }

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct queue1
{
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    bool status = false;
};

struct queue2
{
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
    bool status = false;
};

void display(queue1 arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(20) << arr[i].at << setw(20) << arr[i].bt << setw(20) << arr[i].ct << setw(20) << arr[i].tat << setw(20) << arr[i].wt << endl;
    }
}

void display(queue2 arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(20) << arr[i].at << setw(20) << arr[i].bt << setw(20) << arr[i].ct << setw(20) << arr[i].tat << setw(20) << arr[i].wt << endl;
    }
}

bool comp1(queue1 a, queue1 b)
{
    return (a.at < b.at);
}

bool comp2(queue2 a, queue2 b)
{
    return (a.at < b.at);
}

int nextProcess(queue1 arr[], int t, int n)
{
    int index, b_time, first_time = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].at <= t && arr[i].status == false)
        {
            if (first_time)
            {
                index = i;
                b_time = arr[i].bt;
                first_time = 0;
            }
            else if (arr[i].bt < b_time)
            {
                b_time = arr[i].bt;
                index = i;
            }
        }
    }
    if (first_time)
    {
        return -1;
    }
    else
        return index;
}

bool check_q1(int t, queue1 arr[], int no_process_q1)
{
    bool flag = false;
    for (int i = 0; i < no_process_q1; i++)
    {
        if (arr[i].at <= t && arr[i].status == false)
        {
            flag = true;
        }
    }
    return flag;
}

int main()
{
    int no_process_q1, no_process_q2;
    int nq1, nq2;

    cout << "Enter no. of processes in queue 1:- ";
    cin >> no_process_q1;
    cout << "Enter no. of processes in queue 2:- ";
    cin >> no_process_q2;
    nq1 = no_process_q1;

    queue1 interactive[no_process_q1];
    queue2 background[no_process_q2];

    cout << endl
         << endl;

    cout << "Enter data for queue 1 for Interactive processes :-" << endl;
    for (int i = 0; i < no_process_q1; i++)
    {
        cout << "Enter arrival time of process no. " << i << " ";
        cin >> interactive[i].at;
        cout << "Enter burst time of process no. " << i << " ";
        cin >> interactive[i].bt;
    }

    cout << endl
         << endl;

    cout << "Enter data for queue 2 for Background processes :-" << endl;
    for (int i = 0; i < no_process_q2; i++)
    {
        cout << "Enter arrival time of process no. " << i << " ";
        cin >> background[i].at;
        cout << "Enter burst time of process no. " << i << " ";
        cin >> background[i].bt;
    }

    sort(interactive, interactive + no_process_q1, comp1);
    sort(background, background + no_process_q2, comp2);

    int itr = 0;
    int time = 0;

    while (nq1 != 0)
    {
        if (!check_q1(time, interactive, no_process_q1))
        {
            while (!check_q1(time, interactive, no_process_q1) && background[itr].at <= time && background[itr].status == false && itr != no_process_q2)
            {
                time += background[itr].bt;
                background[itr].ct = time;
                background[itr].tat = background[itr].ct - background[itr].at;
                background[itr].wt = background[itr].tat - background[itr].bt;
                background[itr].status = true;
                itr++;
            }
            if (background[itr].at > time)
            {
                time++;
            }
        }
        else
        {
            int index = nextProcess(interactive, time, no_process_q1);
            time += interactive[index].bt;
            interactive[index].ct = time;
            interactive[index].tat = interactive[index].ct - interactive[index].at;
            interactive[index].wt = interactive[index].tat - interactive[index].bt;
            nq1--;
            interactive[index].status = true;
        }
    }

    while (itr != no_process_q2)
    {
        time += background[itr].bt;
        background[itr].ct = time;
        background[itr].tat = background[itr].ct - background[itr].at;
        background[itr].wt = background[itr].tat - background[itr].bt;
        background[itr].status = true;
        itr++;
    }

    cout << endl
         << endl;

    cout << "Process of q1 :-" << endl;
    cout << setw(20) << "Arrival Time" << setw(20) << "Burst Time" << setw(20) << "Completion Time" << setw(20) << "Turn Around Time" << setw(20) << "Waiting Time" << endl;
    display(interactive, no_process_q1);

    cout << endl
         << endl;

    cout << "Process of q2 :-" << endl;
    cout << setw(20) << "Arrival Time" << setw(20) << "Burst Time" << setw(20) << "Completion Time" << setw(20) << "Turn Around Time" << setw(20) << "Waiting Time" << endl;
    display(background, no_process_q2);
}