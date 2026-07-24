SELECT visited_on,
       SUM(day_amount) OVER (
           ORDER BY visited_on
           ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
       ) AS amount,
       ROUND(
           SUM(day_amount) OVER (
               ORDER BY visited_on
               ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
           ) / 7, 2
       ) AS average_amount
FROM (
    SELECT visited_on, SUM(amount) AS day_amount
    FROM Customer
    GROUP BY visited_on
) t
LIMIT 18446744073709551615 OFFSET 6;