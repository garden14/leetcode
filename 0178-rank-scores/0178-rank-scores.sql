SELECT A.score, COUNT(B.score) AS 'rank'
FROM Scores A,
(SELECT DISTINCT score FROM Scores) B
WHERE A.score<=B.score
GROUP BY A.Id
ORDER BY A.score DESC;