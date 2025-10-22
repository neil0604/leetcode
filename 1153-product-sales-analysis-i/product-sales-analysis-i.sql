# Write your MySQL query statement below


select p.product_name, c.year,c.price
from Sales c join Product  p
on c.product_id =p.product_id 
