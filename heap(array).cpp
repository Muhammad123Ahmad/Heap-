#include <iostream>

using namespace std;
class heaps
{
public:
    int *minheap=new int[15];
    int *arr=new int[15];
    int sizes=0;
    int *check;
    heaps()
    {

        for(int i=1;i<=15;i++)
        {
            cout<<"Enter element : ";
            cin>>arr[i];
        }



    }
    void trasnfer()
    {
        if(sizes>15)
        {
            cout<<"Full"<<endl;
        }
        else
        {

            for(int i=1;i<=15;i++)
            {
                minheap[i]=arr[i];
                sizes++;
            }

        }


    }
    void buildheap()
    {

        check=minheap; //array ka start ma check ko rakh dia ha 
        check++;  //bcz we will start from index 1
        
        for(int i=1;i<=15/2;i++) //divide by 2 is lia kai ha q ka us sa jo value ayti ha us ka next value ka left aur right child nhi ha array ma 
        {
            if(*check>minheap[2*i]) //for left child 2*i
            {
                int swaps=*check;
                *check=minheap[2*i]; 
                minheap[2*i]=swaps;
            }
            if(*check>minheap[2*i+1])  //for right child 2*i+1
            {
                int swaps=*check;
                *check=minheap[2*i+1];
                minheap[2*i+1]=swaps;
            }
            check++;

        }


    }
    void printheap()
    {
        check=minheap;
        for(int i=1;i<=15;i++)
        {
            cout<<*check<<"     ";
            check++;
        }
    }

};

int main()
{
    heaps h;
    h.trasnfer();
    h.buildheap();
    h.buildheap();
    h.buildheap();
    h.buildheap();
    h.buildheap();
    h.buildheap();
    h.printheap();
}
