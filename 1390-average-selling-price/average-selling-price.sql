# Write your MySQL query statement below


select p.product_id , ifnull( round(sum(p.price*ifnull(u.units,0))/sum(ifnull(u.units,0)),2),0.00) as average_price 
from Prices  p left join UnitsSold  u
on p.product_id =u.product_id and p.start_date <= u.purchase_date  and p.end_date  >= u.purchase_date
group  by p.product_id

