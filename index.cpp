#include<iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

void enqueue(){
	if(!isFull()){
		cout<<"masukan data :";
		cin>>data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a<top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}

void clear(){
	top = 0;
	if(top == 0){
		cout<<"data sudah di clear";
	}
}
void view(){
	if(!isEmpty()){
		cout<<"data Antrian :"<<endl;
		for(int a = top-1; a>=0; a--){
			cout<<a+1<<". "<<data[a]<<endl;
		}
	}else{
		cout<<"antrian kosong"<<endl;
	}
	if(isFull()){
		cout<<"antrian penuh"<<endl;
	}
	cout<<endl;
}


int main(){
	int pil;
	que :
		system("cls");
		view();
		cout<<"=======menu utama===="<<endl;
		cout<<"1.Enqueque"<<endl;
		cout<<"2.Dequeue"<<endl;
		cout<<"3.Clear"<<endl;
		cout<<"pilih :";
		cin>>pil;
		
		if(pil == 1){
			enqueue();	
			goto que;
		}else if(pil == 2){
			dequeue();
			goto que;
		}else if(pil == 3){
			clear();
		}
}
