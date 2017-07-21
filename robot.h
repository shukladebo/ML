#include<bits/stdc++.h>
using namespace std;
struct directionNode{
	int xBegin;
	int yBegin;
	int xEnd;
	int yEnd;
};
bool testOverlap(int x1, int x2, int y1, int y2) {
	if(x1==x2 && y1==y2 && x1==y1)
	return true;
	
	if(x1==x2){
	if(y1<y2)
	return (x1>y1 && x1<y2);
	else 
		return (x1>y2 && x1<y1);
	
	}
	if(y1==y2){
		if(x1<x2)
	return (y1>x1 && y1<x2);
	else 
		return (y1>x2 && y1<x1);
	}
  return (x1 >  y1 && x1 <=y2) ||
         (x2 > y1 && x2 < y2) ||
         (y1 > x1 && y1 <= x2) ||
         (y2 > x1 && y2 < x2);
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n_moves;
		cin>> n_moves;
		//directionNode* arr=(directionNode*)malloc(n_moves*sizeof(directionNode));
		vector<directionNode*> arr;
		int currX=0;
		int currY=0;
		for(int j=0;j<n_moves;j++){
			int flag=0;
			int dir;
			int dist;
			cin>> dir >> dist;
			int prevX=currX;
			int prevY=currY;
			if(dir==1){
				currY=currY+dist;
			}
			else if(dir==2){
				currY=currY-dist;
			}
			else if(dir==3){
				currX=currX+dist;
			}
			else if(dir==4){
				currX=currX-dist;
			}
			directionNode* node= new directionNode;
			node->xBegin=prevX;
			node->yBegin=prevY;
			node->xEnd=currX;
			node->yEnd=currY;
			arr.push_back(node);
			for(int k=0;k<arr.size()-1;k++){
				if(testOverlap(arr[k]->xBegin,arr[k]->xEnd,arr[j]->xBegin,arr[j]->xEnd) && testOverlap(arr[k]->yBegin,arr[k]->yEnd,arr[j]->yBegin,arr[j]->yEnd))
				{
					cout<< j+1<< endl;
					flag=1;
					break;
				}
			}
			if(flag==0 && j==n_moves-1)
				cout<< -1 <<endl;
			
		   if(flag!=0)
		   break;
		}
		
		
	}	
	
	return 0;
}
	
	
	
	
	||(x1==y2&&samedir(x1,x2,y1,y2)?true:false)
	
	
	#include<bits/stdc++.h>
using namespace std;
struct directionNode{
	int xBegin;
	int yBegin;
	int xEnd;
	int yEnd;
};
bool oppdir(int a1,int a2,int b1,int b2){
	if(a2-a1>0)
	return (b2-b1>0);
	else
	return (b2-b1<0);
}
bool testOverlap(int x1, int x2, int y1, int y2) {
	if(x1==x2 && y1==y2 && x1==y1)
	return true;
	
	if(x1==x2){
	if(y1<y2)
	return (x1>y1 && x1<y2);
	else 
		return (x1>y2 && x1<y1);
	
	}
	if(y1==y2){
		if(x1<x2)
	return (y1>x1 && y1<x2);
	else 
		return (y1>x2 && y1<x1);
	}
  return (x1 >  y1 && x1 <y2) ||
         (x2 > y1 && x2 < y2) ||
         (y1 > x1 && y1 <x2) ||
         (y2 > x1 && y2 < x2)||(x2==y1&&oppdir(x1,x2,y1,y2)?true:false);
}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n_moves;
		cin>> n_moves;
		//directionNode* arr=(directionNode*)malloc(n_moves*sizeof(directionNode));
		vector<directionNode*> arr;
		int currX=0;
		int currY=0;
		for(int j=0;j<n_moves;j++){
			int flag=0;
			int dir;
			int dist;
			cin>> dir >> dist;
			int prevX=currX;
			int prevY=currY;
			if(dir==1){
				currY=currY+dist;
			}
			else if(dir==2){
				currY=currY-dist;
			}
			else if(dir==3){
				currX=currX+dist;
			}
			else if(dir==4){
				currX=currX-dist;
			}
			directionNode* node= new directionNode;
			node->xBegin=prevX;
			node->yBegin=prevY;
			node->xEnd=currX;
			node->yEnd=currY;
			arr.push_back(node);
			for(int k=0;k<arr.size()-1;k++){
				if(testOverlap(arr[k]->xBegin,arr[k]->xEnd,arr[j]->xBegin,arr[j]->xEnd) && testOverlap(arr[k]->yBegin,arr[k]->yEnd,arr[j]->yBegin,arr[j]->yEnd))
				{
					cout<< j+1<< endl;
					flag=1;
					break;
				}
			}
			if(flag==0 && j==n_moves-1)
				cout<< -1 <<endl;
			
		   if(flag!=0)
		   break;
		}
		
		
	}	
	
	return 0;
}
	
	
	
	
	