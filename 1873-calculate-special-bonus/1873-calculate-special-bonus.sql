# Write your MySQL query statement below

SELECT  employee_id , 
IF(employee_id%2 <> 0 and NAME  not like "M%",salary,0) as 'bonus'
FROM Employees ORDER BY employee_id;