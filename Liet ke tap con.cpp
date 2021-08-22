#include<iostream>
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//Ðánh d?u chua có ph?n t? nào s? d?ng h?t
int A[MAX];//Luu hoán v? vào m?ng A
 
void xuat(int k) {
    for (int i = 1; i <= k; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n thì s? dánh d?u
        if (!Bool[i]) {
            A[k] = i; // Luu m?t ph?n t? vào hoán v?
            xuat(k);
            if(k<n) Try(k + 1);
            Bool[i] = 1;//Ðánh d?u dã dùng
        }
    }
}
 
int main() {
    cout << "Mhap n: ";
    cin >> n;
    Try(1);
}
