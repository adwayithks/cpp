/// #include <algorithm>
/// #include <chrono>
#include <iostream>
// #include<vector>

using namespace std;
/// using namespace std::chrono;

int getIntFromUser()
{
    int input;
    cin>>input;
//    std::cout<<input;
    return input;
}

int main()
{   
//triple slashed comments are used for seeing time for executing a function
    cout<<" Enter no.of rows of pyramid: ";
    int n{getIntFromUser()};

    /// auto start = high_resolution_clock::now();
    
    for(int i{1}; i<=n; i++)
    {
        int l{1};
        for (int j{1}; j<=n+n-1; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else if(l<=i)
            {
                cout<<l<<" ";
                l++;
            }
        }

// ************************************************************************
// We can use the code between line 45 to 52 instead of that from 25 to 39
// ************************************************************************

        // for(int j{1}; j<=n-i; j++)
        // {
        //     cout<<" ";
        // }
        // for(int j{1}; j<=i; j++)
        // {
        //     cout<<j<<" ";
        // }
        cout<<endl;
    }
    /// auto stop = high_resolution_clock::now();
    /// auto duration = duration_cast<microseconds>(stop - start);
 
    /// cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    return 0;
}