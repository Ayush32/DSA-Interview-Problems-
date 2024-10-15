-- nth highest salary
select name, salary FROM
(
    select name, salary , DENSE_RANK() over(order by salary desc) as rank from
    employees
) as rank_salaries where rank = 3

-- three minimum salaries
select   distinct salary FROM(
    SELECT distinct salary, DENSE_RANK() over(order by salary asc) as RANK FROM
    employees
) as rank_salaries where RANK <= 3

-- rank for every salaries
SELECT distinct salary, DENSE_RANK() over(order by salary desc) as RANK FROM
    employees

-- three maximum salaries
select   distinct salary FROM(
    SELECT distinct salary, DENSE_RANK() over(order by salary desc) as RANK FROM
    employees
) as rank_salaries where RANK <= 3