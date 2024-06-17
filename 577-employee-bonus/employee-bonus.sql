# Write your MySQL query statement below
select E.name as name , B.bonus as bonus 
from Employee as E
Left Join Bonus as B
on E.empId = B.empId 
where B.bonus < 1000 OR B.bonus is NULL ;  