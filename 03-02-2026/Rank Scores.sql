CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      SELECT DISTINCT salary
      FROM employee as e1
      WHERE N - 1 = (
        SELECT COUNT(DISTINCT salary)
        FROM employee as e2
        WHERE e1.salary < e2.salary
      )
    );
END