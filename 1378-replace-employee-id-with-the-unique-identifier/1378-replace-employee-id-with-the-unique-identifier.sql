# Write your MySQL query statement below
select unique_id , name from Employees as e left join EmployeeUNI as et on e.id = et.id;