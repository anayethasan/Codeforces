SELECT d.name as Department,
       e.name as Employee,
       e.salary as Salary
FROM Employee AS e 
    JOIN Department As d 
    ON e.departmentId = d.id 
WHERE e.salary = (
    SELECT MAX(Salary)
    FROM Employee
    WHERE departmentId = e.departmentId
)