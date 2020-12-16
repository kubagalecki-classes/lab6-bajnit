#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>


using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > ret_v(people.size());

 for_each(people.begin(),people.end(),[](Human& a){ a.birthday();});
 transform(people.begin(),people.end(),ret_v.rbegin(),monster){return a.isMonster()? 'n':'y';});

  return ret_v;
}
