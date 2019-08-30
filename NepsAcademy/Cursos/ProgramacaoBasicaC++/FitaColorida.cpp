/*
	Neps Academy
	Curso: Programação Básica para Competições de Programação (em C++)
	Categoria: Vetores e Matrizes
	Problema: Fita Colorida
	Estado: Accepted
*/

#include<iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	int fita[n];
	
	for(int i = 0; i<n ; i++) 
		cin >> fita[i];
	
	for(int i = 0; i < n; i++) {
		if(fita[i] != -1)
			continue;
			
		int j = i;
		int right = 0;
		int left = 0;
		
		while(right < 9 && j < n-1 && fita[j] != 0) {
			j++;
			right++;
		}
		int rightValue = fita[j];
		j=i;	
		while(left < 9 && j > 0 && fita[j] != 0) {
			j--;
			left++;
		}
		int leftValue = fita[j];
		
		if(left == 0 || (rightValue == 0 && leftValue != 0))
			fita[i] = right;
		else if(right == 0 || (leftValue == 0 && rightValue != 0))
			fita[i] = left;
		else if(rightValue != 0 && leftValue != 0)
			fita[i] = 9;
		else
			fita[i] = min(left, right);
	}
	
	for(int i = 0; i < n; i++) 
		cout << fita[i] << " ";
	cout << endl;
	
	return 0;
}
