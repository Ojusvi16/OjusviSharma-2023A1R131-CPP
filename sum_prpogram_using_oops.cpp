#include<stdio.h>
class Add{
//class = data + operation
//data
int a,b,c;
//operation
public:
void input(int x,int y){
    a=x;
    b=y;
}
void calculate(){//calculation
    c=a+b;
}
void display(){
    printf("a+b=%d",c);
}
};
int main(){
Add obj; //class name  and object name
obj.input(12,14);
obj.calculate();
obj.display();
}