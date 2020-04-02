#include<bits/stdc++.h>
using namespace std;
 
 
void creategraph();
void dfs_path(int,int,int*,int);
int visit[100];
int a[100][100],n;
int weight[100];
int path[100];
int path_index;

int main()
{
  int i,v,k,d;
   
  printf("Enter the number of vertices: ");
  scanf("%d",&n);
  creategraph();
  printf("Enter the source vertex: \n");
  scanf("%d",&v);
  printf("Enter the destination vertex: \n");
  scanf("%d",&d);
  printf("The paths from %d to %d using DFS: \n",v,d);
  dfs_path(v,d,path,path_index);
 
}

void dfs_path(int v, int d, int path[], int path_index)
{
  int w;
  visit[v]=1;
  path[path_index] = v;
  path_index++;
  if(v == d)
  {
      for(int i = 0; i<path_index; i++)
      {
        cout<<path[i]<<" ";
      }
      cout<<endl;
  }
  else 
  {
    for(w=0;w<=n;w++)
    {
      if((a[v][w]==1)&&(visit[w]==0))
        dfs_path(w,d,path,path_index);
    }
  }
  path_index--;
  visit[v] = false;
}
   

void creategraph()
{
  int i,j;
  int c = 0;
  while(1)
  {
      printf("Enter the source and the destination vertex: ");
      scanf("%d%d",&i,&j);
      if((i==-9)&&(j==-9))
          break;
    //   printf("Enter the weight: ");
    //   scanf("%d",&weight[c]); 
      c++;
      a[i][j]=1;
    }
}
