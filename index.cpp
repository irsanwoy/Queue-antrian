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

void insert(){
	if(!isFull()){
		cout<<"Masukkan data: ";
		cin>>data[top];
		top++;
	}
}

void Delete(){
	if(!isEmpty()){
		for(int a = 0; a<top-1; a++){
			data[a] = data[a+1];
		}
		top--;
	}
}

void clear(){
	top = 0;
	cout << "Antrian telah dikosongkan." << endl;
}

void view(){
	if(!isEmpty()){
		cout<<"Data Antrian:"<<endl;
		for(int a = top-1; a>=0; a--){
			cout<<a+1<<". "<<data[a]<<endl;
		}
	}else{
		cout<<"Antrian kosong"<<endl;
	}
	if(isFull()){
		cout<<"Antrian penuh"<<endl;
	}
	cout<<endl;
}

int main(){
	int pil;
	que :
		system("cls");
		view();
		cout<<"=======Menu Utama===="<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. Clear"<<endl;
		cout<<"Pilih: ";
		cin>>pil;
		
		if(pil == 1){
			insert();	
			goto que;
		}else if(pil == 2){
			Delete();
			goto que;
		}else if(pil == 3){
			clear();
		}
	return 0;
}
