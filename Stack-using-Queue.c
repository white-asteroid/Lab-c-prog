// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int top1=-1,top2=-1,s1[5],s2[5];
    int pop1()
    {
   
       
            int a =s1[top1];
            top1--;
            return a;
        
    }
    void push(int x)
    {
        top1++;
        s1[top1]=x;
    }
    void push2(int x)
    {
        top2++;
        s2[top2]=x;
    }
    void dequeue()
    {
        for(int d=top1;d>=1;d--)
            push2(pop1());
        // printf("top1 : %d",top1 );
        pop1();
        // printf("top1 : %d",top1 );
        for(int d = top2;d>=0;d--)
            {
                push(s2[d]);
            }
        
    }
    void enqueue(int x)
    {
        push(x);
    }
    for(int i = 1;i<=5;i++)
        enqueue(i*10);
    dequeue();
     for(int i = 0;i<=top1;i++)
        printf(" %d ", s1[i]);
    
    return 0;
}
