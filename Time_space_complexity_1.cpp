// 1)Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 0; i /= 2) {
c++;
}
TIME COMPLEXITY = 0(log(n)base2)




// 2)Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 1; i /= i) {
c++;
}
TIME COMPLEXITY = 0(1)




// 3)Calculate the time complexity for the following code snippet where k is some constant (k<<n).
int c = 0;
for(int i = 0; i < n; i += k) {
c++;
}
TIME COMPLEXITY = 0(n)




// 4)Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i *= 2) {
c++;
}
TIME COMPLEXITY = 0(log(n)base2)




// 5)Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
c +=i;
}
TIME COMPLEXITY = 0(n)




// 6)Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 0; j < i; j++){
c++;
}
}
TIME COMPLEXITY = 0(n*n)