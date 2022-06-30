<p>The goal of this task is to reproduce the <a href="/rltoken/zbaecdLFfcqthH0X60M62g" title="2048 game" target="_blank">2048 game</a>(NSFW !!) mechanics on a single horizontal line.</p>

<p>Given an array of integers, we want to be able to slide &amp; merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)</p>

<ul>
<li>Write a function that slides and merges an array of integers</li>
<li>Prototype: <code>int slide_line(int *line, size_t size, int direction);</code></li>
<li>Where <code>line</code> points to an array of integers containing <code>size</code> elements, that must be slided &amp; merged to the direction represented by <code>direction</code>. <code>direction</code> can be either:

<ul>
<li><code>SLIDE_LEFT</code></li>
<li><code>SLIDE_RIGHT</code></li>
<li>If it is something else, the function must fail</li>
<li>Both macros <code>SLIDE_LEFT</code> and <code>SLIDE_RIGHT</code> must be defined in <code>slide_line.h</code></li>
</ul></li>
<li>Your function must return <code>1</code> upon success, or <code>0</code> upon failure</li>
<li>You are <strong>not allowed</strong> to allocate memory dynamically (malloc, calloc, …)</li>
</ul>
