#include <bits/stdc++.h>
#include <string>
using namespace std;

struct tree{
    int p, l, r;
};
const int MAX = 10e5;
const int NIL = -1;
int d[MAX+1];
tree tr[MAX+1];

void setDepth(int v, int dep){
  d[v] = dep;
  if (tr[v].r != NIL) {
    setDepth(tr[v].r, dep);
  }
  if (tr[v].l != NIL) {
    setDepth(tr[v].l, dep+1);
  }
}
 
int main() {
  int n, root;
  int l, r, c, v;
  cin >> n;
  for (int i = 0; i < n; i++){ tr[i].p = tr[i].l = tr[i].r = NIL;} 
  for (int i = 0; i < n; i++){
    int v, d;
    cin >> v >> d;
    for (int j = 0;j < d;j++){
      int c;
      cin >> c;
      if (j ==0) tr[v].l = c;
      else tr[l].r = c;
      l=c;
      tr[c].p = v;
    }
  }
  for (int i = 0; i < n; i++){
    if (tr[i].p == NIL) root = i;
  }
  setDepth(root, 0);
  for (int i = 0; i < n; i++){
    string type;
    if (tr[i].p == NIL) {type = "root";}
    else if (tr[i].l != NIL) {type = "internal node";}
    else {type = "leaf";}
    cout << "node " << i << ": parent = " << tr[i].p << ", depth = " << d[i] << ", " << type << ", [";
    
    int c = tr[i].l;
    if (c != NIL){
      cout << c;
      c = tr[c].r;
    }
    while(c != NIL){
      cout << ", ";
      cout <<  c;
      c = tr[c].r;
    }
     
    cout << "]" << endl;
  }
}