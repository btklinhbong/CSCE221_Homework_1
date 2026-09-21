#ifndef QUEST2_H
#define QUEST2_H

#include <vector>

extern int num_comp{0};

template <typename vectorType>
int Binary_Search(const std::vector<vectorType> &v, const vectorType &x) {
    num_comp =0;
   int mid, low = 0;     
   int high = (int) v.size()-1;     
   while (low < high) {         
      mid = (low+high)/2;                 
      if (num_comp++, v[mid] < x) low = mid+1;         
      else high = mid;     
   }     
   if (num_comp++, x == v[low]) return low; //OK: found          
   return -1; //not found
} 

#endif // QUEST2_H