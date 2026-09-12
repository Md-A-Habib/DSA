/*
==================================================
            ARRAY - QUICK NOTE
==================================================*/

//Header:
#include <bits/stdc++.h>
using namespace std;


👉/*1. SORT
--------------------------------------------------*/

//Ascending:
sort(a, a + n);

//Descending:
sort(a, a + n, greater<int>());


👉/*2. REVERSE
--------------------------------------------------*/

reverse(a, a + n);


👉/*3. MAXIMUM VALUE
--------------------------------------------------*/

*max_element(a, a + n);


👉/*4. MINIMUM VALUE
--------------------------------------------------*/

*min_element(a, a + n);


👉/*5. INDEX OF MAXIMUM
--------------------------------------------------*/

max_element(a, a + n) - a;


👉/*6. INDEX OF MINIMUM
--------------------------------------------------*/

min_element(a, a + n) - a;


👉/*7. FIND AN ELEMENT
--------------------------------------------------*/

find(a, a + n, x);

//Check:

if(find(a, a + n, x) != a + n)
    cout << "Found";
else
    cout << "Not Found";


👉/*8. COUNT A VALUE
--------------------------------------------------*/

count(a, a + n, x);

//Example:

int cnt = count(a, a + n, 5);


👉/*9. SUM OF ELEMENTS
--------------------------------------------------*/

int sum = accumulate(a, a + n, 0);

//For long long:

long long sum = accumulate(a, a + n, 0LL);


👉/*10. CHECK ALL ELEMENTS
--------------------------------------------------*/

all_of(a, a + n, [](int x) {
    return x > 0;
});

//Returns true if ALL elements are positive.


👉/*11. CHECK ANY ELEMENT
--------------------------------------------------*/

any_of(a, a + n, [](int x) {
    return x < 0;
});

//Returns true if AT LEAST ONE element is negative.


👉/*12. CHECK NO ELEMENT
--------------------------------------------------*/

none_of(a, a + n, [](int x) {
    return x < 0;
});

//Returns true if NO element is negative.


==================================================
             MOST IMPORTANT FOR CP
==================================================

sort(a, a + n);

reverse(a, a + n);

*max_element(a, a + n);

*min_element(a, a + n);

max_element(a, a + n) - a;

min_element(a, a + n) - a;

find(a, a + n, x);

count(a, a + n, x);

accumulate(a, a + n, 0LL);


==================================================
             TIME COMPLEXITY
==================================================

Access a[i]              -> O(1)
Search                   -> O(n)
count                    -> O(n)
max/min                  -> O(n)
sum                      -> O(n)
reverse                  -> O(n)
sort                     -> O(n log n)


==================================================
              IMPORTANT
==================================================

Normal Array:
a + n

Vector:
v.begin(), v.end()

Example:

sort(v.begin(), v.end());

==================================================
