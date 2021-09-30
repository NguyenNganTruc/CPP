// Nguyen Ngan Truc
// 6151071027 
#include <iostream >
using namespace std;
class sinhvien{
    private:
	string Hoten;
	char Gioitinh [20];
	int  Ngaysinh;
	float Diemtb;
    public:
	void nhap();
	void xuat();
	 
};
void sinhvien::nhap()
{
	cout<<"Nhap Ho ten :";
	getline(cin,Hoten);
	cout<<"Nhap Gioi tinh:";
	cin>>Gioitinh;
	cout<<"Nhap Ngay sinh:";
	cin>>Ngaysinh;
	cout<<"Diem Tb:";
	cin>>Diemtb;
    cin.ignore();
}
void sinhvien::xuat(){
	cout <<"Ho va ten:"<<Hoten<<endl;
	cout <<"Gioi tinh:" <<Gioitinh<<endl;
	cout <<"Ngay sinh:" <<Ngaysinh<<endl;
	cout <<"Diem Tb:"<<Diemtb<<endl; 
}
int main(){
	sinhvien ps1,ps2;
	ps1.nhap(); 
	ps1.xuat();
    cout<<endl;
	ps2.nhap();
	ps2.xuat();

}