#include<iostream>
#include<climits>
using namespace std;

int main()
{   
    //inputing the values of array
    int n;
    cin >> n;
    int array[n];
    //printing the array
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    //sum of elements of an array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    //The Largest element is
    
    int max_value = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ( array[i] > max_value)
        {
            max_value = array[i];
        }
    }
    
    //The Second Largest element is
    int second_l = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ( array[i] > second_l && array[i]<max_value)
        {            
                second_l = array[i];   
        }
    }
    
    //The Smallest element is
    int min_value = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ( min_value > array[i])
        {
            min_value = array[i];
        }
        
    }
    
    
    //average of array
    int average;
    average = sum/n;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    cout << "The Largest element is " << max_value << endl;
    cout << "The Smallest element is " << min_value << endl;
    cout << "The Second Largest element is " << second_l << endl;
    
    
    return 0;
}