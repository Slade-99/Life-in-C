
// For string type vertices


#include <bits/stdc++.h>
using namespace std;

int main() {
  // adjacency list for weighted

  freopen("input.txt", "r", stdin);

  vector<vector<pair<int, int>>> graph;

  map<string, int> actuals;



  string a, b;
  int c;
  int i = 0;
  while (cin >> a >> b >> c) {

    if ((actuals.count(a)) == 0) {
      actuals[a] = i;
      i++;
    }

    if (actuals.count(b) == 0) {
      actuals[b] = i;
      i++;
    }
  
    

    int g = graph.size();
    
    
    
    
    if ((g - 1) < actuals[a]) {
      
      graph.push_back({make_pair(actuals[b], c)});

      

    } else {

      graph[actuals[a]].push_back(make_pair(actuals[b], c));

      
    }

    g = graph.size() ;
    
    if ((g - 1) < actuals[b]) {

      graph.push_back({make_pair(actuals[a], c)});

      

    } else {

      graph[actuals[b]].push_back(make_pair(actuals[a], c));

      
    }
  }

  int g = graph.size();
  
  for(auto i : actuals){

   cout<<"Node "<<i.first<<":";
   for(auto j: graph[i.second]){
     cout<<j.first<<","<<j.second<<" ";
   }

    cout<<endl;
  }

  

  return 0;
}
