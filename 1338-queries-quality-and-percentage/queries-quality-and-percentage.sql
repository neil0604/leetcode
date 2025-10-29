# Write your MySQL query statement below


select query_name , round(sum(rating/position)/count(query_name ),2) as quality ,round( sum(rating < 3) * 100/count(query_name ),2) as poor_query_percentage 
from Queries 
group by query_name 