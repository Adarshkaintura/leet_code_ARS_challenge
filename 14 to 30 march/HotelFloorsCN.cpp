// You are the receptionist at a hotel which has 10 floors, numbered from 0 to 9 and each floor has 26 rooms named from ‘A’ to ‘Z’. Being a receptionist your task is to handle booking queries.

// You get booking queries in the form of strings of size 3 where 1st character is ‘+’ means room is booked, or ‘-’ means room is freed. Second character represents the floor of the room i.e, ‘0’ to ‘9’. Third character represents the room name i.e, ‘A’ to ‘Z’.

// On booking of each room you collect 1 coin from the customer. After the end of all the booking queries you have to count the number of coins you collected.

// You may assume that the list describes a correct sequence of bookings in chronological order i.e., only free rooms can be booked, and only booked rooms can be freed.

// For Example:-

// Consider booking queries to be ["+1A", "+3E", "-1A", "+4F", "+1A", "-3E"]
// +1A: Room A on the 1st floor is booked and you collected 1 coin.
// +3E: Room E on the 3rd floor is booked and you collected 1 coin.
// -1A: Room A on the 1st floor is freed.
// +4F: Room F on the 4th floor is booked and you collected 1 coin.
// +1A: Room A on the 1st floor is booked and you collected 1 coin.
// -3E: Room E on the 3rd floor is freed.
// So you collected 4 coins.

//my solution
#include <bits/stdc++.h> 
int hotelBookings(vector<string> queries) {
    unordered_map<string,int> mp;
    for(auto it:queries){
        if(it[0]=='+'){
            mp[it]+=1;
        }else{
            if(mp.find(it)!=mp.end()){
                mp[it]--;

            }
        }
    }
    int sum=0;
    for(auto it:mp){
      sum+=it.second;
    }
    return sum;
}
