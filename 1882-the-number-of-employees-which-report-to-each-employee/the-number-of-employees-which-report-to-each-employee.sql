# Write your MySQL query statement below


select 
    e.reports_to as employee_id,
    m.name,
    count(e.employee_id) as reports_count,
    round(sum(e.age)/count(e.employee_id),0) as average_age

from Employees e inner join Employees m
on e.reports_to=m.employee_id
group by e.reports_to
order by e.reports_to

