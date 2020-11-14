/*
Michael Alberda
//2019
assignment
cs121
Bruce Bolden
*/
  #include<iostream>
  #include<string>
  #include<cstdlib>
  #include<stack>
  #include<fstream>

  using namespace std;

char maze[27];
int main(){

ifstream infile;
infile.open("maze.txt");

for(int i=0;i<2;i++){
infile>>maze[i];
}

for(int i=2;i<27;i++){
infile>>maze[i];
}


for(int i=0;i<27;i++){
cout<<maze[i];
}
















}
