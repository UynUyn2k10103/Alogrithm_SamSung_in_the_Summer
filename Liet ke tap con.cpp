#include<iostream>
#define MAX 20
using namespace std;
 
int n;
int Bool[MAX] = { 0 };//��nh d?u chua c� ph?n t? n�o s? d?ng h?t
int A[MAX];//Luu ho�n v? v�o m?ng A
 
void xuat(int k) {
    for (int i = 1; i <= k; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n th� s? d�nh d?u
        if (!Bool[i]) {
            A[k] = i; // Luu m?t ph?n t? v�o ho�n v?
            xuat(k);
            if(k<n) Try(k + 1);
            Bool[i] = 1;//��nh d?u d� d�ng
        }
    }
}
 
int main() {
    cout << "Mhap n: ";
    cin >> n;
    Try(1);
}
