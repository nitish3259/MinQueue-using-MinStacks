/*EXAMPLE IMPLEMENTATION*/

#include<iostream>
using namespace std;
#include "Minqueue.h"


int main(){
    MinQueue<int> q;
	q.push(3);
	q.push(2);
	q.push(1);
	q.push(6);
	//q.top();
	cout<<q.top();//prints 3
}
