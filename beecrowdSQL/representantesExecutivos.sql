SELECT prd.name AS product_name, prv.name AS provider_name
FROM products prd
INNER JOIN providers prv ON prd.id_providers = prv.id
WHERE prd.id_categories = 6;