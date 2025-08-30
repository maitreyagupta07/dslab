#include <iostream>
using namespace std;
void constring(char arr1[],char arr2[],int n,int m){
    for(int i=n;i<n+m;i++){
        arr1[i]=arr2[i-n];}
    for(int i=0;i<n+m;i++){
        cout<<arr1[i];}
    cout<<"\n";
}
void reversestring(char arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;}
        for(int i=0;i<n;i++){
            cout<<arr[i];}
        cout<<"\n";
    }
void delvowel(char arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if (!(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||
            arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')) {
          arr[k++] = arr[i];//k is incremented , vowels are ignored
      }
  }
  arr[k] = '\0';//k is now end of strinf
  cout << arr;
  cout << endl;}

  void sortInAlphabeticalOrder(char arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
            char temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}

void convertUpperToLower(char arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            arr[i] = arr[i] + 32;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    char arr1[10], arr2[10];
    cin >> arr1 >> arr2;

    int n = strlen(arr1);
    int m = strlen(arr2);

    cout << "Conacatenation of 2 Srings: "; 
    constring(arr1, arr2, n, m); 

    cout << "Revesrse String: ";
    reversestring(arr1, n);

    cout << "Deleted Vowels: ";
    delvowel(arr1, n);

    cout << "Sorting in Alphabetical Order: ";
    sortInAlphabeticalOrder(arr2, n);

    cout << "Upper Case to Lower Case: ";
    convertUpperToLower(arr2, n);
    
    return 0;
}


