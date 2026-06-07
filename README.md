<h1>🧩 C++ Problem Solving & Logic Building - Level 2</h1>

<p>A repository dedicated to tracking my progress through the second level of algorithmic problem-solving. This stage focuses on transitioning from basic syntax to advanced arithmetic logic, functional programming, and deeper control flow optimization.</p>

<p><b>Approach:</b> Code efficiency, proper functional decomposition, and keeping clean code practices at the forefront.</p>

---

<h2>📊 Solved Problems Index (01 - 05)</h2>

<table>
  <tr>
    <th>#</th>
    <th>Problem Title</th>
    <th>Concepts Covered</th>
    <th>Solution Link</th>
  </tr>
  <tr>
    <td>01</td>
    <td>Multiplication Table From 1 To 10</td>
    <td>Nested Loops, Output Formatting, Text Alignment (\t)</td>
    <td><a href="./Problem%2001.cpp">View Code</a></td>
  </tr>
  <tr>
    <td>02</td>
    <td>Print All Prime Numbers from 1 to N</td>
    <td>Number Theory, Optimization via Math Functions, Reusable Logic</td>
    <td><a href="./Problem%2002.cpp">View Code</a></td>
  </tr>
  <tr>
    <td>03</td>
    <td>Check if a Number is Perfect or Not</td>
    <td>Divisors Summation, Boolean Predicates, Logic Validation</td>
    <td><a href="./Problem%2003.cpp">View Code</a></td>
  </tr>
  <tr>
    <td>04</td>
    <td>Print All Perfect Numbers from 1 to N</td>
    <td>Nested Logic, Function Reuse, Scale-Up Algorithms</td>
    <td><a href="./Problem%2004.cpp">View Code</a></td>
  </tr>
  <tr>
    <td>05</td>
    <td>Read Number & Print it in Reversed Order</td>
    <td>Digit Extraction, Modulo Arithmetic (%), Integer Division (/)</td>
    <td><a href="./Problem%2005.cpp">View Code</a></td>
  </tr>
</table>

---

<h2>💡 Logic Insights & Evolution</h2>

<h3>🔄 Digit Manipulation (Problem 05)</h3>
<p>Moving away from handling numbers as pseudo-strings or arrays. Instead of searching for array properties, using pure mathematical operators proved to be faster and memory-optimized:</p>
<ul>
  <li><b>Extraction:</b> <code>Number % 10</code> pulls the last digit cleanly.</li>
  <li><b>Reduction:</b> <code>Number / 10</code> shrinks the number down for the next iteration inside a <code>while (Number > 0)</code> loop.</li>
</ul>

<h3>⚙️ Structural Scaling (Problem 03 & 04)</h3>
<p>The code evolves seamlessly between these two problems. Problem 3 sets the baseline logic to isolate a single "Perfect Number" via predicates. Problem 4 immediately scales this up by looping that identical predicate function from 1 to N, showing the structural advantage of modular architecture.</p>

---

<h2>🛠️ Tech & Tools</h2>
<p>• <b>Language:</b> C++17 / C++20</p>
<p>• <b>IDE:</b> Visual Studio</p>
<p>• <b>Focus:</b> Algorithm Design, Modular Programming, Logic Reusability</p>
