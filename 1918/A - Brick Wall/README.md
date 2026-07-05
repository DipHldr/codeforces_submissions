<h2><a href="https://codeforces.com/contest/1918/problem/A" target="_blank" rel="noopener noreferrer">1918A — Brick Wall</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1918A](https://codeforces.com/contest/1918/problem/A) |

## Topics
`constructive algorithms` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Brick Wall</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A brick is a strip of size $$$1 \times k$$$, placed horizontally or vertically, where $$$k$$$ can be an arbitrary number that is at least $$$2$$$ ($$$k \ge 2$$$).</p><p>A brick wall of size $$$n \times m$$$ is such a way to place several bricks inside a rectangle $$$n \times m$$$, that all bricks lie either horizontally or vertically in the cells, do not cross the border of the rectangle, and that each cell of the $$$n \times m$$$ rectangle belongs to exactly one brick. Here $$$n$$$ is the height of the rectangle $$$n \times m$$$ and $$$m$$$ is the width. <span class="tex-font-style-bf">Note</span> that there can be bricks with different values of k in the same brick wall.</p><p>The wall stability is the difference between the number of horizontal bricks and the number of vertical bricks. <span class="tex-font-style-bf">Note</span> that if you used $$$0$$$ horizontal bricks and $$$2$$$ vertical ones, then the stability will be <span class="tex-font-style-bf">$$$-2$$$, not $$$2$$$</span>.</p><p>What is the maximal possible stability of a wall of size $$$n \times m$$$?</p><p>It is guaranteed that under restrictions in the statement at least one $$$n \times m$$$ wall exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10\,000$$$), the number of test cases. </p><p>The only line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$2 \le n,\,m \le 10^4$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer, the maximum stability of a wall of size $$$n \times m$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006197112539657548" id="id004839138662759481" class="input-output-copier">Copy</div></div><pre id="id006197112539657548"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2</div><div class="test-example-line test-example-line-even test-example-line-2">7 8</div><div class="test-example-line test-example-line-odd test-example-line-3">16 9</div><div class="test-example-line test-example-line-even test-example-line-4">3 5</div><div class="test-example-line test-example-line-odd test-example-line-5">10000 10000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00018022320628567567" id="id007640763207106501" class="input-output-copier">Copy</div></div><pre id="id00018022320628567567">2
28
64
6
50000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the 1st test case, the maximum stability of $$$2$$$ is obtained by placing two horizontal bricks $$$1 \times 2$$$ one on top of the other.</p><p>In the 2nd test case, one can get the maximum stability of $$$28$$$ by placing $$$4$$$ horizontal bricks $$$1 \times 2$$$ in each of the $$$7$$$ rows.</p></div>