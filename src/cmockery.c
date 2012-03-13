



<!DOCTYPE html>
<html>
<head>
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = null;
 
 
 var CS_env = {"profileUrl":null,"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/17950784993885590195","projectHomeUrl":"/p/cmockery","relativeBaseUrl":"","projectName":"cmockery","loggedInUserEmail":null};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-2242582-4'],
 ['projectTracker._trackPageview']);
 
 
 </script>
 
 
 <title>cmockery.c - 
 cmockery -
 
 
 A lightweight library to simplify and generalize the process of writing unit tests for C applications. - Google Project Hosting
 </title>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/17950784993885590195/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/17950784993885590195/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/17950784993885590195/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/17950784993885590195/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 <a href="#" id="projects-dropdown" onclick="return false;"><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fcmockery%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcmockery.c&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fcmockery%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcmockery.c" onclick="_CS_click('/gb/ph/signin');"><u>Sign in</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 <td id="plogo">
 <link itemprop="url" href="/p/cmockery">
 <a href="/p/cmockery/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/search-48.gif" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/cmockery/"><span itemprop="name">cmockery</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/cmockery/"><span itemprop="description">A lightweight library to simplify and generalize the process of writing unit tests for C applications.</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/cmockery/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/cmockery/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/cmockery/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/cmockery/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/cmockery/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/cmockery/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/cmockery/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/cmockery/source/list">Changes</a></span> &nbsp;
 
 &nbsp;
 
 <form action="/p/cmockery/source/search" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 
 
 
 </form>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/cmockery/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/cmockery/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/cmockery/source/browse/trunk/src/">src</a><span class="sp">/&nbsp;</span>cmockery.c</span>
 
 

 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/cmockery/source/browse/trunk/src/cmockery.c?r=41" title="Previous">&lsaquo;r41</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r42</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn42_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn42_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn42_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn42_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn42_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn42_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn42_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn42_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn42_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn42_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn42_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn42_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn42_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn42_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn42_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn42_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn42_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn42_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn42_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn42_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn42_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn42_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn42_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn42_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn42_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn42_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn42_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn42_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn42_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn42_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn42_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn42_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn42_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn42_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn42_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn42_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn42_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn42_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn42_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn42_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn42_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn42_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn42_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn42_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn42_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn42_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn42_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn42_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn42_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn42_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn42_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn42_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn42_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn42_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn42_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn42_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn42_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn42_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn42_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn42_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn42_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn42_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn42_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn42_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn42_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn42_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn42_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn42_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn42_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn42_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn42_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn42_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn42_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn42_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn42_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn42_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn42_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn42_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn42_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn42_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn42_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn42_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn42_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn42_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn42_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn42_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn42_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn42_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn42_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn42_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn42_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn42_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn42_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn42_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn42_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn42_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn42_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn42_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn42_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn42_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn42_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn42_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn42_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn42_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn42_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn42_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn42_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn42_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn42_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn42_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn42_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn42_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn42_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn42_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn42_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn42_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn42_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn42_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn42_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn42_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn42_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn42_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn42_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn42_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn42_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn42_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn42_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn42_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn42_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn42_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn42_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn42_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn42_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn42_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn42_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn42_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn42_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn42_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn42_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn42_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn42_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn42_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn42_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn42_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn42_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn42_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn42_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn42_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn42_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn42_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn42_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn42_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn42_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn42_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn42_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn42_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn42_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn42_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn42_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn42_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn42_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn42_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn42_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn42_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn42_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn42_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn42_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn42_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn42_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn42_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn42_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn42_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn42_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn42_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn42_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn42_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn42_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn42_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn42_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn42_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn42_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn42_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn42_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn42_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn42_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn42_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn42_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn42_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn42_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn42_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn42_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn42_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn42_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn42_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn42_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn42_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn42_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn42_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn42_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn42_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn42_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn42_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn42_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn42_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn42_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn42_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn42_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn42_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn42_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn42_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn42_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn42_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn42_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn42_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn42_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn42_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn42_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn42_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn42_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn42_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn42_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn42_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn42_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn42_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn42_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn42_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn42_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn42_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn42_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn42_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn42_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn42_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn42_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn42_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn42_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn42_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn42_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn42_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn42_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn42_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn42_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn42_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn42_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn42_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn42_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn42_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn42_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn42_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn42_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn42_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn42_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn42_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn42_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn42_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn42_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn42_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn42_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn42_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn42_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn42_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn42_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn42_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn42_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn42_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn42_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn42_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn42_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn42_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn42_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn42_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn42_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn42_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn42_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn42_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn42_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn42_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn42_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn42_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn42_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn42_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn42_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn42_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn42_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn42_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn42_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn42_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn42_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn42_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn42_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn42_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn42_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn42_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn42_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn42_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn42_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn42_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn42_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn42_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn42_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn42_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn42_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn42_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn42_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn42_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn42_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn42_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn42_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn42_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn42_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn42_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn42_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn42_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn42_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn42_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn42_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn42_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn42_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn42_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn42_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn42_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn42_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn42_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn42_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn42_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn42_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn42_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn42_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn42_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn42_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn42_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn42_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn42_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn42_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn42_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn42_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn42_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn42_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn42_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn42_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn42_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn42_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn42_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn42_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn42_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn42_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn42_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn42_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn42_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn42_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn42_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn42_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn42_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn42_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn42_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn42_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn42_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn42_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn42_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn42_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn42_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn42_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn42_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn42_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn42_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn42_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn42_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn42_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn42_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn42_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn42_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn42_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn42_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn42_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn42_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn42_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn42_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn42_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn42_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn42_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn42_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn42_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn42_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn42_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn42_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn42_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn42_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn42_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn42_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn42_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn42_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn42_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn42_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn42_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn42_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn42_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn42_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn42_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn42_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn42_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn42_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn42_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn42_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn42_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn42_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn42_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn42_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn42_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn42_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn42_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn42_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn42_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn42_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn42_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn42_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn42_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn42_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn42_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn42_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn42_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn42_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn42_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn42_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn42_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn42_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn42_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn42_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn42_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn42_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn42_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn42_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn42_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn42_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn42_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn42_434"

><td id="434"><a href="#434">434</a></td></tr
><tr id="gr_svn42_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn42_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn42_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn42_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn42_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn42_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn42_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn42_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn42_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn42_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn42_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn42_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn42_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn42_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn42_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn42_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn42_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn42_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn42_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn42_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn42_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn42_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn42_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn42_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn42_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn42_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn42_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn42_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn42_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn42_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn42_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn42_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn42_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn42_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn42_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn42_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn42_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn42_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn42_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn42_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn42_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn42_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn42_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn42_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn42_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn42_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn42_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn42_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn42_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn42_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn42_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn42_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn42_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn42_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn42_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn42_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn42_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn42_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn42_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn42_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn42_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn42_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn42_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn42_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn42_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn42_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn42_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn42_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn42_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn42_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn42_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn42_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn42_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn42_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn42_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn42_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn42_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn42_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn42_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn42_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn42_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn42_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn42_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn42_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn42_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn42_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn42_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn42_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn42_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn42_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn42_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn42_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn42_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn42_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn42_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn42_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn42_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn42_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn42_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn42_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn42_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn42_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn42_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn42_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn42_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn42_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn42_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn42_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn42_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn42_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn42_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn42_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn42_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn42_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn42_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn42_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn42_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn42_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn42_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn42_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn42_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn42_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn42_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn42_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn42_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn42_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn42_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn42_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn42_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn42_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn42_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn42_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn42_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn42_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn42_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn42_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn42_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn42_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn42_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn42_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn42_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn42_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn42_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn42_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn42_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn42_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn42_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn42_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn42_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn42_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn42_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn42_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn42_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn42_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn42_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn42_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn42_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn42_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn42_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn42_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn42_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn42_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn42_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn42_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn42_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn42_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn42_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn42_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn42_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn42_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn42_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn42_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn42_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn42_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn42_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn42_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn42_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn42_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn42_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn42_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn42_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn42_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn42_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn42_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn42_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn42_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn42_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn42_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn42_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn42_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn42_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn42_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn42_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn42_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn42_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn42_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn42_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn42_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn42_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn42_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn42_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn42_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn42_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn42_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn42_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn42_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn42_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn42_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn42_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn42_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn42_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn42_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn42_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn42_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn42_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn42_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn42_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn42_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn42_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn42_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn42_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn42_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn42_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn42_658"

><td id="658"><a href="#658">658</a></td></tr
><tr id="gr_svn42_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn42_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn42_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn42_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn42_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn42_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn42_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn42_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn42_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn42_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn42_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn42_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn42_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn42_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn42_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn42_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn42_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn42_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn42_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn42_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn42_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn42_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn42_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn42_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn42_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn42_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn42_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn42_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn42_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn42_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn42_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn42_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn42_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn42_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn42_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn42_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn42_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn42_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn42_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn42_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn42_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn42_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn42_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn42_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn42_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn42_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn42_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn42_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn42_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn42_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn42_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn42_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn42_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn42_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn42_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn42_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn42_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn42_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn42_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn42_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn42_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn42_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn42_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn42_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn42_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn42_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn42_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn42_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn42_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn42_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn42_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn42_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn42_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn42_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn42_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn42_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn42_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn42_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn42_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn42_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn42_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn42_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn42_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn42_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn42_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn42_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn42_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn42_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn42_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn42_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn42_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn42_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn42_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn42_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn42_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn42_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn42_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn42_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn42_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn42_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn42_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn42_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn42_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn42_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn42_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn42_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn42_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn42_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn42_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn42_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn42_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn42_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn42_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn42_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn42_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn42_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn42_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn42_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn42_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn42_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn42_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn42_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn42_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn42_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn42_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn42_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn42_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn42_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn42_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn42_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn42_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn42_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn42_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn42_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn42_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn42_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn42_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn42_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn42_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn42_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn42_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn42_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn42_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn42_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn42_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn42_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn42_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn42_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn42_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn42_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn42_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn42_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn42_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn42_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn42_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn42_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn42_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn42_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn42_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn42_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn42_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn42_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn42_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn42_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn42_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn42_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn42_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn42_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn42_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn42_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn42_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn42_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn42_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn42_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn42_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn42_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn42_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn42_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn42_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn42_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn42_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn42_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn42_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn42_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn42_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn42_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn42_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn42_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn42_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn42_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn42_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn42_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn42_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn42_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn42_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn42_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn42_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn42_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn42_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn42_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn42_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn42_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn42_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn42_862"

><td id="862"><a href="#862">862</a></td></tr
><tr id="gr_svn42_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn42_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn42_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn42_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn42_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn42_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn42_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn42_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn42_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn42_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn42_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn42_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn42_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn42_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn42_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn42_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn42_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn42_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn42_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn42_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn42_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn42_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn42_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn42_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn42_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn42_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn42_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn42_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn42_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn42_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn42_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn42_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn42_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn42_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn42_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn42_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn42_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn42_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn42_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn42_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn42_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn42_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn42_905"

><td id="905"><a href="#905">905</a></td></tr
><tr id="gr_svn42_906"

><td id="906"><a href="#906">906</a></td></tr
><tr id="gr_svn42_907"

><td id="907"><a href="#907">907</a></td></tr
><tr id="gr_svn42_908"

><td id="908"><a href="#908">908</a></td></tr
><tr id="gr_svn42_909"

><td id="909"><a href="#909">909</a></td></tr
><tr id="gr_svn42_910"

><td id="910"><a href="#910">910</a></td></tr
><tr id="gr_svn42_911"

><td id="911"><a href="#911">911</a></td></tr
><tr id="gr_svn42_912"

><td id="912"><a href="#912">912</a></td></tr
><tr id="gr_svn42_913"

><td id="913"><a href="#913">913</a></td></tr
><tr id="gr_svn42_914"

><td id="914"><a href="#914">914</a></td></tr
><tr id="gr_svn42_915"

><td id="915"><a href="#915">915</a></td></tr
><tr id="gr_svn42_916"

><td id="916"><a href="#916">916</a></td></tr
><tr id="gr_svn42_917"

><td id="917"><a href="#917">917</a></td></tr
><tr id="gr_svn42_918"

><td id="918"><a href="#918">918</a></td></tr
><tr id="gr_svn42_919"

><td id="919"><a href="#919">919</a></td></tr
><tr id="gr_svn42_920"

><td id="920"><a href="#920">920</a></td></tr
><tr id="gr_svn42_921"

><td id="921"><a href="#921">921</a></td></tr
><tr id="gr_svn42_922"

><td id="922"><a href="#922">922</a></td></tr
><tr id="gr_svn42_923"

><td id="923"><a href="#923">923</a></td></tr
><tr id="gr_svn42_924"

><td id="924"><a href="#924">924</a></td></tr
><tr id="gr_svn42_925"

><td id="925"><a href="#925">925</a></td></tr
><tr id="gr_svn42_926"

><td id="926"><a href="#926">926</a></td></tr
><tr id="gr_svn42_927"

><td id="927"><a href="#927">927</a></td></tr
><tr id="gr_svn42_928"

><td id="928"><a href="#928">928</a></td></tr
><tr id="gr_svn42_929"

><td id="929"><a href="#929">929</a></td></tr
><tr id="gr_svn42_930"

><td id="930"><a href="#930">930</a></td></tr
><tr id="gr_svn42_931"

><td id="931"><a href="#931">931</a></td></tr
><tr id="gr_svn42_932"

><td id="932"><a href="#932">932</a></td></tr
><tr id="gr_svn42_933"

><td id="933"><a href="#933">933</a></td></tr
><tr id="gr_svn42_934"

><td id="934"><a href="#934">934</a></td></tr
><tr id="gr_svn42_935"

><td id="935"><a href="#935">935</a></td></tr
><tr id="gr_svn42_936"

><td id="936"><a href="#936">936</a></td></tr
><tr id="gr_svn42_937"

><td id="937"><a href="#937">937</a></td></tr
><tr id="gr_svn42_938"

><td id="938"><a href="#938">938</a></td></tr
><tr id="gr_svn42_939"

><td id="939"><a href="#939">939</a></td></tr
><tr id="gr_svn42_940"

><td id="940"><a href="#940">940</a></td></tr
><tr id="gr_svn42_941"

><td id="941"><a href="#941">941</a></td></tr
><tr id="gr_svn42_942"

><td id="942"><a href="#942">942</a></td></tr
><tr id="gr_svn42_943"

><td id="943"><a href="#943">943</a></td></tr
><tr id="gr_svn42_944"

><td id="944"><a href="#944">944</a></td></tr
><tr id="gr_svn42_945"

><td id="945"><a href="#945">945</a></td></tr
><tr id="gr_svn42_946"

><td id="946"><a href="#946">946</a></td></tr
><tr id="gr_svn42_947"

><td id="947"><a href="#947">947</a></td></tr
><tr id="gr_svn42_948"

><td id="948"><a href="#948">948</a></td></tr
><tr id="gr_svn42_949"

><td id="949"><a href="#949">949</a></td></tr
><tr id="gr_svn42_950"

><td id="950"><a href="#950">950</a></td></tr
><tr id="gr_svn42_951"

><td id="951"><a href="#951">951</a></td></tr
><tr id="gr_svn42_952"

><td id="952"><a href="#952">952</a></td></tr
><tr id="gr_svn42_953"

><td id="953"><a href="#953">953</a></td></tr
><tr id="gr_svn42_954"

><td id="954"><a href="#954">954</a></td></tr
><tr id="gr_svn42_955"

><td id="955"><a href="#955">955</a></td></tr
><tr id="gr_svn42_956"

><td id="956"><a href="#956">956</a></td></tr
><tr id="gr_svn42_957"

><td id="957"><a href="#957">957</a></td></tr
><tr id="gr_svn42_958"

><td id="958"><a href="#958">958</a></td></tr
><tr id="gr_svn42_959"

><td id="959"><a href="#959">959</a></td></tr
><tr id="gr_svn42_960"

><td id="960"><a href="#960">960</a></td></tr
><tr id="gr_svn42_961"

><td id="961"><a href="#961">961</a></td></tr
><tr id="gr_svn42_962"

><td id="962"><a href="#962">962</a></td></tr
><tr id="gr_svn42_963"

><td id="963"><a href="#963">963</a></td></tr
><tr id="gr_svn42_964"

><td id="964"><a href="#964">964</a></td></tr
><tr id="gr_svn42_965"

><td id="965"><a href="#965">965</a></td></tr
><tr id="gr_svn42_966"

><td id="966"><a href="#966">966</a></td></tr
><tr id="gr_svn42_967"

><td id="967"><a href="#967">967</a></td></tr
><tr id="gr_svn42_968"

><td id="968"><a href="#968">968</a></td></tr
><tr id="gr_svn42_969"

><td id="969"><a href="#969">969</a></td></tr
><tr id="gr_svn42_970"

><td id="970"><a href="#970">970</a></td></tr
><tr id="gr_svn42_971"

><td id="971"><a href="#971">971</a></td></tr
><tr id="gr_svn42_972"

><td id="972"><a href="#972">972</a></td></tr
><tr id="gr_svn42_973"

><td id="973"><a href="#973">973</a></td></tr
><tr id="gr_svn42_974"

><td id="974"><a href="#974">974</a></td></tr
><tr id="gr_svn42_975"

><td id="975"><a href="#975">975</a></td></tr
><tr id="gr_svn42_976"

><td id="976"><a href="#976">976</a></td></tr
><tr id="gr_svn42_977"

><td id="977"><a href="#977">977</a></td></tr
><tr id="gr_svn42_978"

><td id="978"><a href="#978">978</a></td></tr
><tr id="gr_svn42_979"

><td id="979"><a href="#979">979</a></td></tr
><tr id="gr_svn42_980"

><td id="980"><a href="#980">980</a></td></tr
><tr id="gr_svn42_981"

><td id="981"><a href="#981">981</a></td></tr
><tr id="gr_svn42_982"

><td id="982"><a href="#982">982</a></td></tr
><tr id="gr_svn42_983"

><td id="983"><a href="#983">983</a></td></tr
><tr id="gr_svn42_984"

><td id="984"><a href="#984">984</a></td></tr
><tr id="gr_svn42_985"

><td id="985"><a href="#985">985</a></td></tr
><tr id="gr_svn42_986"

><td id="986"><a href="#986">986</a></td></tr
><tr id="gr_svn42_987"

><td id="987"><a href="#987">987</a></td></tr
><tr id="gr_svn42_988"

><td id="988"><a href="#988">988</a></td></tr
><tr id="gr_svn42_989"

><td id="989"><a href="#989">989</a></td></tr
><tr id="gr_svn42_990"

><td id="990"><a href="#990">990</a></td></tr
><tr id="gr_svn42_991"

><td id="991"><a href="#991">991</a></td></tr
><tr id="gr_svn42_992"

><td id="992"><a href="#992">992</a></td></tr
><tr id="gr_svn42_993"

><td id="993"><a href="#993">993</a></td></tr
><tr id="gr_svn42_994"

><td id="994"><a href="#994">994</a></td></tr
><tr id="gr_svn42_995"

><td id="995"><a href="#995">995</a></td></tr
><tr id="gr_svn42_996"

><td id="996"><a href="#996">996</a></td></tr
><tr id="gr_svn42_997"

><td id="997"><a href="#997">997</a></td></tr
><tr id="gr_svn42_998"

><td id="998"><a href="#998">998</a></td></tr
><tr id="gr_svn42_999"

><td id="999"><a href="#999">999</a></td></tr
><tr id="gr_svn42_1000"

><td id="1000"><a href="#1000">1000</a></td></tr
><tr id="gr_svn42_1001"

><td id="1001"><a href="#1001">1001</a></td></tr
><tr id="gr_svn42_1002"

><td id="1002"><a href="#1002">1002</a></td></tr
><tr id="gr_svn42_1003"

><td id="1003"><a href="#1003">1003</a></td></tr
><tr id="gr_svn42_1004"

><td id="1004"><a href="#1004">1004</a></td></tr
><tr id="gr_svn42_1005"

><td id="1005"><a href="#1005">1005</a></td></tr
><tr id="gr_svn42_1006"

><td id="1006"><a href="#1006">1006</a></td></tr
><tr id="gr_svn42_1007"

><td id="1007"><a href="#1007">1007</a></td></tr
><tr id="gr_svn42_1008"

><td id="1008"><a href="#1008">1008</a></td></tr
><tr id="gr_svn42_1009"

><td id="1009"><a href="#1009">1009</a></td></tr
><tr id="gr_svn42_1010"

><td id="1010"><a href="#1010">1010</a></td></tr
><tr id="gr_svn42_1011"

><td id="1011"><a href="#1011">1011</a></td></tr
><tr id="gr_svn42_1012"

><td id="1012"><a href="#1012">1012</a></td></tr
><tr id="gr_svn42_1013"

><td id="1013"><a href="#1013">1013</a></td></tr
><tr id="gr_svn42_1014"

><td id="1014"><a href="#1014">1014</a></td></tr
><tr id="gr_svn42_1015"

><td id="1015"><a href="#1015">1015</a></td></tr
><tr id="gr_svn42_1016"

><td id="1016"><a href="#1016">1016</a></td></tr
><tr id="gr_svn42_1017"

><td id="1017"><a href="#1017">1017</a></td></tr
><tr id="gr_svn42_1018"

><td id="1018"><a href="#1018">1018</a></td></tr
><tr id="gr_svn42_1019"

><td id="1019"><a href="#1019">1019</a></td></tr
><tr id="gr_svn42_1020"

><td id="1020"><a href="#1020">1020</a></td></tr
><tr id="gr_svn42_1021"

><td id="1021"><a href="#1021">1021</a></td></tr
><tr id="gr_svn42_1022"

><td id="1022"><a href="#1022">1022</a></td></tr
><tr id="gr_svn42_1023"

><td id="1023"><a href="#1023">1023</a></td></tr
><tr id="gr_svn42_1024"

><td id="1024"><a href="#1024">1024</a></td></tr
><tr id="gr_svn42_1025"

><td id="1025"><a href="#1025">1025</a></td></tr
><tr id="gr_svn42_1026"

><td id="1026"><a href="#1026">1026</a></td></tr
><tr id="gr_svn42_1027"

><td id="1027"><a href="#1027">1027</a></td></tr
><tr id="gr_svn42_1028"

><td id="1028"><a href="#1028">1028</a></td></tr
><tr id="gr_svn42_1029"

><td id="1029"><a href="#1029">1029</a></td></tr
><tr id="gr_svn42_1030"

><td id="1030"><a href="#1030">1030</a></td></tr
><tr id="gr_svn42_1031"

><td id="1031"><a href="#1031">1031</a></td></tr
><tr id="gr_svn42_1032"

><td id="1032"><a href="#1032">1032</a></td></tr
><tr id="gr_svn42_1033"

><td id="1033"><a href="#1033">1033</a></td></tr
><tr id="gr_svn42_1034"

><td id="1034"><a href="#1034">1034</a></td></tr
><tr id="gr_svn42_1035"

><td id="1035"><a href="#1035">1035</a></td></tr
><tr id="gr_svn42_1036"

><td id="1036"><a href="#1036">1036</a></td></tr
><tr id="gr_svn42_1037"

><td id="1037"><a href="#1037">1037</a></td></tr
><tr id="gr_svn42_1038"

><td id="1038"><a href="#1038">1038</a></td></tr
><tr id="gr_svn42_1039"

><td id="1039"><a href="#1039">1039</a></td></tr
><tr id="gr_svn42_1040"

><td id="1040"><a href="#1040">1040</a></td></tr
><tr id="gr_svn42_1041"

><td id="1041"><a href="#1041">1041</a></td></tr
><tr id="gr_svn42_1042"

><td id="1042"><a href="#1042">1042</a></td></tr
><tr id="gr_svn42_1043"

><td id="1043"><a href="#1043">1043</a></td></tr
><tr id="gr_svn42_1044"

><td id="1044"><a href="#1044">1044</a></td></tr
><tr id="gr_svn42_1045"

><td id="1045"><a href="#1045">1045</a></td></tr
><tr id="gr_svn42_1046"

><td id="1046"><a href="#1046">1046</a></td></tr
><tr id="gr_svn42_1047"

><td id="1047"><a href="#1047">1047</a></td></tr
><tr id="gr_svn42_1048"

><td id="1048"><a href="#1048">1048</a></td></tr
><tr id="gr_svn42_1049"

><td id="1049"><a href="#1049">1049</a></td></tr
><tr id="gr_svn42_1050"

><td id="1050"><a href="#1050">1050</a></td></tr
><tr id="gr_svn42_1051"

><td id="1051"><a href="#1051">1051</a></td></tr
><tr id="gr_svn42_1052"

><td id="1052"><a href="#1052">1052</a></td></tr
><tr id="gr_svn42_1053"

><td id="1053"><a href="#1053">1053</a></td></tr
><tr id="gr_svn42_1054"

><td id="1054"><a href="#1054">1054</a></td></tr
><tr id="gr_svn42_1055"

><td id="1055"><a href="#1055">1055</a></td></tr
><tr id="gr_svn42_1056"

><td id="1056"><a href="#1056">1056</a></td></tr
><tr id="gr_svn42_1057"

><td id="1057"><a href="#1057">1057</a></td></tr
><tr id="gr_svn42_1058"

><td id="1058"><a href="#1058">1058</a></td></tr
><tr id="gr_svn42_1059"

><td id="1059"><a href="#1059">1059</a></td></tr
><tr id="gr_svn42_1060"

><td id="1060"><a href="#1060">1060</a></td></tr
><tr id="gr_svn42_1061"

><td id="1061"><a href="#1061">1061</a></td></tr
><tr id="gr_svn42_1062"

><td id="1062"><a href="#1062">1062</a></td></tr
><tr id="gr_svn42_1063"

><td id="1063"><a href="#1063">1063</a></td></tr
><tr id="gr_svn42_1064"

><td id="1064"><a href="#1064">1064</a></td></tr
><tr id="gr_svn42_1065"

><td id="1065"><a href="#1065">1065</a></td></tr
><tr id="gr_svn42_1066"

><td id="1066"><a href="#1066">1066</a></td></tr
><tr id="gr_svn42_1067"

><td id="1067"><a href="#1067">1067</a></td></tr
><tr id="gr_svn42_1068"

><td id="1068"><a href="#1068">1068</a></td></tr
><tr id="gr_svn42_1069"

><td id="1069"><a href="#1069">1069</a></td></tr
><tr id="gr_svn42_1070"

><td id="1070"><a href="#1070">1070</a></td></tr
><tr id="gr_svn42_1071"

><td id="1071"><a href="#1071">1071</a></td></tr
><tr id="gr_svn42_1072"

><td id="1072"><a href="#1072">1072</a></td></tr
><tr id="gr_svn42_1073"

><td id="1073"><a href="#1073">1073</a></td></tr
><tr id="gr_svn42_1074"

><td id="1074"><a href="#1074">1074</a></td></tr
><tr id="gr_svn42_1075"

><td id="1075"><a href="#1075">1075</a></td></tr
><tr id="gr_svn42_1076"

><td id="1076"><a href="#1076">1076</a></td></tr
><tr id="gr_svn42_1077"

><td id="1077"><a href="#1077">1077</a></td></tr
><tr id="gr_svn42_1078"

><td id="1078"><a href="#1078">1078</a></td></tr
><tr id="gr_svn42_1079"

><td id="1079"><a href="#1079">1079</a></td></tr
><tr id="gr_svn42_1080"

><td id="1080"><a href="#1080">1080</a></td></tr
><tr id="gr_svn42_1081"

><td id="1081"><a href="#1081">1081</a></td></tr
><tr id="gr_svn42_1082"

><td id="1082"><a href="#1082">1082</a></td></tr
><tr id="gr_svn42_1083"

><td id="1083"><a href="#1083">1083</a></td></tr
><tr id="gr_svn42_1084"

><td id="1084"><a href="#1084">1084</a></td></tr
><tr id="gr_svn42_1085"

><td id="1085"><a href="#1085">1085</a></td></tr
><tr id="gr_svn42_1086"

><td id="1086"><a href="#1086">1086</a></td></tr
><tr id="gr_svn42_1087"

><td id="1087"><a href="#1087">1087</a></td></tr
><tr id="gr_svn42_1088"

><td id="1088"><a href="#1088">1088</a></td></tr
><tr id="gr_svn42_1089"

><td id="1089"><a href="#1089">1089</a></td></tr
><tr id="gr_svn42_1090"

><td id="1090"><a href="#1090">1090</a></td></tr
><tr id="gr_svn42_1091"

><td id="1091"><a href="#1091">1091</a></td></tr
><tr id="gr_svn42_1092"

><td id="1092"><a href="#1092">1092</a></td></tr
><tr id="gr_svn42_1093"

><td id="1093"><a href="#1093">1093</a></td></tr
><tr id="gr_svn42_1094"

><td id="1094"><a href="#1094">1094</a></td></tr
><tr id="gr_svn42_1095"

><td id="1095"><a href="#1095">1095</a></td></tr
><tr id="gr_svn42_1096"

><td id="1096"><a href="#1096">1096</a></td></tr
><tr id="gr_svn42_1097"

><td id="1097"><a href="#1097">1097</a></td></tr
><tr id="gr_svn42_1098"

><td id="1098"><a href="#1098">1098</a></td></tr
><tr id="gr_svn42_1099"

><td id="1099"><a href="#1099">1099</a></td></tr
><tr id="gr_svn42_1100"

><td id="1100"><a href="#1100">1100</a></td></tr
><tr id="gr_svn42_1101"

><td id="1101"><a href="#1101">1101</a></td></tr
><tr id="gr_svn42_1102"

><td id="1102"><a href="#1102">1102</a></td></tr
><tr id="gr_svn42_1103"

><td id="1103"><a href="#1103">1103</a></td></tr
><tr id="gr_svn42_1104"

><td id="1104"><a href="#1104">1104</a></td></tr
><tr id="gr_svn42_1105"

><td id="1105"><a href="#1105">1105</a></td></tr
><tr id="gr_svn42_1106"

><td id="1106"><a href="#1106">1106</a></td></tr
><tr id="gr_svn42_1107"

><td id="1107"><a href="#1107">1107</a></td></tr
><tr id="gr_svn42_1108"

><td id="1108"><a href="#1108">1108</a></td></tr
><tr id="gr_svn42_1109"

><td id="1109"><a href="#1109">1109</a></td></tr
><tr id="gr_svn42_1110"

><td id="1110"><a href="#1110">1110</a></td></tr
><tr id="gr_svn42_1111"

><td id="1111"><a href="#1111">1111</a></td></tr
><tr id="gr_svn42_1112"

><td id="1112"><a href="#1112">1112</a></td></tr
><tr id="gr_svn42_1113"

><td id="1113"><a href="#1113">1113</a></td></tr
><tr id="gr_svn42_1114"

><td id="1114"><a href="#1114">1114</a></td></tr
><tr id="gr_svn42_1115"

><td id="1115"><a href="#1115">1115</a></td></tr
><tr id="gr_svn42_1116"

><td id="1116"><a href="#1116">1116</a></td></tr
><tr id="gr_svn42_1117"

><td id="1117"><a href="#1117">1117</a></td></tr
><tr id="gr_svn42_1118"

><td id="1118"><a href="#1118">1118</a></td></tr
><tr id="gr_svn42_1119"

><td id="1119"><a href="#1119">1119</a></td></tr
><tr id="gr_svn42_1120"

><td id="1120"><a href="#1120">1120</a></td></tr
><tr id="gr_svn42_1121"

><td id="1121"><a href="#1121">1121</a></td></tr
><tr id="gr_svn42_1122"

><td id="1122"><a href="#1122">1122</a></td></tr
><tr id="gr_svn42_1123"

><td id="1123"><a href="#1123">1123</a></td></tr
><tr id="gr_svn42_1124"

><td id="1124"><a href="#1124">1124</a></td></tr
><tr id="gr_svn42_1125"

><td id="1125"><a href="#1125">1125</a></td></tr
><tr id="gr_svn42_1126"

><td id="1126"><a href="#1126">1126</a></td></tr
><tr id="gr_svn42_1127"

><td id="1127"><a href="#1127">1127</a></td></tr
><tr id="gr_svn42_1128"

><td id="1128"><a href="#1128">1128</a></td></tr
><tr id="gr_svn42_1129"

><td id="1129"><a href="#1129">1129</a></td></tr
><tr id="gr_svn42_1130"

><td id="1130"><a href="#1130">1130</a></td></tr
><tr id="gr_svn42_1131"

><td id="1131"><a href="#1131">1131</a></td></tr
><tr id="gr_svn42_1132"

><td id="1132"><a href="#1132">1132</a></td></tr
><tr id="gr_svn42_1133"

><td id="1133"><a href="#1133">1133</a></td></tr
><tr id="gr_svn42_1134"

><td id="1134"><a href="#1134">1134</a></td></tr
><tr id="gr_svn42_1135"

><td id="1135"><a href="#1135">1135</a></td></tr
><tr id="gr_svn42_1136"

><td id="1136"><a href="#1136">1136</a></td></tr
><tr id="gr_svn42_1137"

><td id="1137"><a href="#1137">1137</a></td></tr
><tr id="gr_svn42_1138"

><td id="1138"><a href="#1138">1138</a></td></tr
><tr id="gr_svn42_1139"

><td id="1139"><a href="#1139">1139</a></td></tr
><tr id="gr_svn42_1140"

><td id="1140"><a href="#1140">1140</a></td></tr
><tr id="gr_svn42_1141"

><td id="1141"><a href="#1141">1141</a></td></tr
><tr id="gr_svn42_1142"

><td id="1142"><a href="#1142">1142</a></td></tr
><tr id="gr_svn42_1143"

><td id="1143"><a href="#1143">1143</a></td></tr
><tr id="gr_svn42_1144"

><td id="1144"><a href="#1144">1144</a></td></tr
><tr id="gr_svn42_1145"

><td id="1145"><a href="#1145">1145</a></td></tr
><tr id="gr_svn42_1146"

><td id="1146"><a href="#1146">1146</a></td></tr
><tr id="gr_svn42_1147"

><td id="1147"><a href="#1147">1147</a></td></tr
><tr id="gr_svn42_1148"

><td id="1148"><a href="#1148">1148</a></td></tr
><tr id="gr_svn42_1149"

><td id="1149"><a href="#1149">1149</a></td></tr
><tr id="gr_svn42_1150"

><td id="1150"><a href="#1150">1150</a></td></tr
><tr id="gr_svn42_1151"

><td id="1151"><a href="#1151">1151</a></td></tr
><tr id="gr_svn42_1152"

><td id="1152"><a href="#1152">1152</a></td></tr
><tr id="gr_svn42_1153"

><td id="1153"><a href="#1153">1153</a></td></tr
><tr id="gr_svn42_1154"

><td id="1154"><a href="#1154">1154</a></td></tr
><tr id="gr_svn42_1155"

><td id="1155"><a href="#1155">1155</a></td></tr
><tr id="gr_svn42_1156"

><td id="1156"><a href="#1156">1156</a></td></tr
><tr id="gr_svn42_1157"

><td id="1157"><a href="#1157">1157</a></td></tr
><tr id="gr_svn42_1158"

><td id="1158"><a href="#1158">1158</a></td></tr
><tr id="gr_svn42_1159"

><td id="1159"><a href="#1159">1159</a></td></tr
><tr id="gr_svn42_1160"

><td id="1160"><a href="#1160">1160</a></td></tr
><tr id="gr_svn42_1161"

><td id="1161"><a href="#1161">1161</a></td></tr
><tr id="gr_svn42_1162"

><td id="1162"><a href="#1162">1162</a></td></tr
><tr id="gr_svn42_1163"

><td id="1163"><a href="#1163">1163</a></td></tr
><tr id="gr_svn42_1164"

><td id="1164"><a href="#1164">1164</a></td></tr
><tr id="gr_svn42_1165"

><td id="1165"><a href="#1165">1165</a></td></tr
><tr id="gr_svn42_1166"

><td id="1166"><a href="#1166">1166</a></td></tr
><tr id="gr_svn42_1167"

><td id="1167"><a href="#1167">1167</a></td></tr
><tr id="gr_svn42_1168"

><td id="1168"><a href="#1168">1168</a></td></tr
><tr id="gr_svn42_1169"

><td id="1169"><a href="#1169">1169</a></td></tr
><tr id="gr_svn42_1170"

><td id="1170"><a href="#1170">1170</a></td></tr
><tr id="gr_svn42_1171"

><td id="1171"><a href="#1171">1171</a></td></tr
><tr id="gr_svn42_1172"

><td id="1172"><a href="#1172">1172</a></td></tr
><tr id="gr_svn42_1173"

><td id="1173"><a href="#1173">1173</a></td></tr
><tr id="gr_svn42_1174"

><td id="1174"><a href="#1174">1174</a></td></tr
><tr id="gr_svn42_1175"

><td id="1175"><a href="#1175">1175</a></td></tr
><tr id="gr_svn42_1176"

><td id="1176"><a href="#1176">1176</a></td></tr
><tr id="gr_svn42_1177"

><td id="1177"><a href="#1177">1177</a></td></tr
><tr id="gr_svn42_1178"

><td id="1178"><a href="#1178">1178</a></td></tr
><tr id="gr_svn42_1179"

><td id="1179"><a href="#1179">1179</a></td></tr
><tr id="gr_svn42_1180"

><td id="1180"><a href="#1180">1180</a></td></tr
><tr id="gr_svn42_1181"

><td id="1181"><a href="#1181">1181</a></td></tr
><tr id="gr_svn42_1182"

><td id="1182"><a href="#1182">1182</a></td></tr
><tr id="gr_svn42_1183"

><td id="1183"><a href="#1183">1183</a></td></tr
><tr id="gr_svn42_1184"

><td id="1184"><a href="#1184">1184</a></td></tr
><tr id="gr_svn42_1185"

><td id="1185"><a href="#1185">1185</a></td></tr
><tr id="gr_svn42_1186"

><td id="1186"><a href="#1186">1186</a></td></tr
><tr id="gr_svn42_1187"

><td id="1187"><a href="#1187">1187</a></td></tr
><tr id="gr_svn42_1188"

><td id="1188"><a href="#1188">1188</a></td></tr
><tr id="gr_svn42_1189"

><td id="1189"><a href="#1189">1189</a></td></tr
><tr id="gr_svn42_1190"

><td id="1190"><a href="#1190">1190</a></td></tr
><tr id="gr_svn42_1191"

><td id="1191"><a href="#1191">1191</a></td></tr
><tr id="gr_svn42_1192"

><td id="1192"><a href="#1192">1192</a></td></tr
><tr id="gr_svn42_1193"

><td id="1193"><a href="#1193">1193</a></td></tr
><tr id="gr_svn42_1194"

><td id="1194"><a href="#1194">1194</a></td></tr
><tr id="gr_svn42_1195"

><td id="1195"><a href="#1195">1195</a></td></tr
><tr id="gr_svn42_1196"

><td id="1196"><a href="#1196">1196</a></td></tr
><tr id="gr_svn42_1197"

><td id="1197"><a href="#1197">1197</a></td></tr
><tr id="gr_svn42_1198"

><td id="1198"><a href="#1198">1198</a></td></tr
><tr id="gr_svn42_1199"

><td id="1199"><a href="#1199">1199</a></td></tr
><tr id="gr_svn42_1200"

><td id="1200"><a href="#1200">1200</a></td></tr
><tr id="gr_svn42_1201"

><td id="1201"><a href="#1201">1201</a></td></tr
><tr id="gr_svn42_1202"

><td id="1202"><a href="#1202">1202</a></td></tr
><tr id="gr_svn42_1203"

><td id="1203"><a href="#1203">1203</a></td></tr
><tr id="gr_svn42_1204"

><td id="1204"><a href="#1204">1204</a></td></tr
><tr id="gr_svn42_1205"

><td id="1205"><a href="#1205">1205</a></td></tr
><tr id="gr_svn42_1206"

><td id="1206"><a href="#1206">1206</a></td></tr
><tr id="gr_svn42_1207"

><td id="1207"><a href="#1207">1207</a></td></tr
><tr id="gr_svn42_1208"

><td id="1208"><a href="#1208">1208</a></td></tr
><tr id="gr_svn42_1209"

><td id="1209"><a href="#1209">1209</a></td></tr
><tr id="gr_svn42_1210"

><td id="1210"><a href="#1210">1210</a></td></tr
><tr id="gr_svn42_1211"

><td id="1211"><a href="#1211">1211</a></td></tr
><tr id="gr_svn42_1212"

><td id="1212"><a href="#1212">1212</a></td></tr
><tr id="gr_svn42_1213"

><td id="1213"><a href="#1213">1213</a></td></tr
><tr id="gr_svn42_1214"

><td id="1214"><a href="#1214">1214</a></td></tr
><tr id="gr_svn42_1215"

><td id="1215"><a href="#1215">1215</a></td></tr
><tr id="gr_svn42_1216"

><td id="1216"><a href="#1216">1216</a></td></tr
><tr id="gr_svn42_1217"

><td id="1217"><a href="#1217">1217</a></td></tr
><tr id="gr_svn42_1218"

><td id="1218"><a href="#1218">1218</a></td></tr
><tr id="gr_svn42_1219"

><td id="1219"><a href="#1219">1219</a></td></tr
><tr id="gr_svn42_1220"

><td id="1220"><a href="#1220">1220</a></td></tr
><tr id="gr_svn42_1221"

><td id="1221"><a href="#1221">1221</a></td></tr
><tr id="gr_svn42_1222"

><td id="1222"><a href="#1222">1222</a></td></tr
><tr id="gr_svn42_1223"

><td id="1223"><a href="#1223">1223</a></td></tr
><tr id="gr_svn42_1224"

><td id="1224"><a href="#1224">1224</a></td></tr
><tr id="gr_svn42_1225"

><td id="1225"><a href="#1225">1225</a></td></tr
><tr id="gr_svn42_1226"

><td id="1226"><a href="#1226">1226</a></td></tr
><tr id="gr_svn42_1227"

><td id="1227"><a href="#1227">1227</a></td></tr
><tr id="gr_svn42_1228"

><td id="1228"><a href="#1228">1228</a></td></tr
><tr id="gr_svn42_1229"

><td id="1229"><a href="#1229">1229</a></td></tr
><tr id="gr_svn42_1230"

><td id="1230"><a href="#1230">1230</a></td></tr
><tr id="gr_svn42_1231"

><td id="1231"><a href="#1231">1231</a></td></tr
><tr id="gr_svn42_1232"

><td id="1232"><a href="#1232">1232</a></td></tr
><tr id="gr_svn42_1233"

><td id="1233"><a href="#1233">1233</a></td></tr
><tr id="gr_svn42_1234"

><td id="1234"><a href="#1234">1234</a></td></tr
><tr id="gr_svn42_1235"

><td id="1235"><a href="#1235">1235</a></td></tr
><tr id="gr_svn42_1236"

><td id="1236"><a href="#1236">1236</a></td></tr
><tr id="gr_svn42_1237"

><td id="1237"><a href="#1237">1237</a></td></tr
><tr id="gr_svn42_1238"

><td id="1238"><a href="#1238">1238</a></td></tr
><tr id="gr_svn42_1239"

><td id="1239"><a href="#1239">1239</a></td></tr
><tr id="gr_svn42_1240"

><td id="1240"><a href="#1240">1240</a></td></tr
><tr id="gr_svn42_1241"

><td id="1241"><a href="#1241">1241</a></td></tr
><tr id="gr_svn42_1242"

><td id="1242"><a href="#1242">1242</a></td></tr
><tr id="gr_svn42_1243"

><td id="1243"><a href="#1243">1243</a></td></tr
><tr id="gr_svn42_1244"

><td id="1244"><a href="#1244">1244</a></td></tr
><tr id="gr_svn42_1245"

><td id="1245"><a href="#1245">1245</a></td></tr
><tr id="gr_svn42_1246"

><td id="1246"><a href="#1246">1246</a></td></tr
><tr id="gr_svn42_1247"

><td id="1247"><a href="#1247">1247</a></td></tr
><tr id="gr_svn42_1248"

><td id="1248"><a href="#1248">1248</a></td></tr
><tr id="gr_svn42_1249"

><td id="1249"><a href="#1249">1249</a></td></tr
><tr id="gr_svn42_1250"

><td id="1250"><a href="#1250">1250</a></td></tr
><tr id="gr_svn42_1251"

><td id="1251"><a href="#1251">1251</a></td></tr
><tr id="gr_svn42_1252"

><td id="1252"><a href="#1252">1252</a></td></tr
><tr id="gr_svn42_1253"

><td id="1253"><a href="#1253">1253</a></td></tr
><tr id="gr_svn42_1254"

><td id="1254"><a href="#1254">1254</a></td></tr
><tr id="gr_svn42_1255"

><td id="1255"><a href="#1255">1255</a></td></tr
><tr id="gr_svn42_1256"

><td id="1256"><a href="#1256">1256</a></td></tr
><tr id="gr_svn42_1257"

><td id="1257"><a href="#1257">1257</a></td></tr
><tr id="gr_svn42_1258"

><td id="1258"><a href="#1258">1258</a></td></tr
><tr id="gr_svn42_1259"

><td id="1259"><a href="#1259">1259</a></td></tr
><tr id="gr_svn42_1260"

><td id="1260"><a href="#1260">1260</a></td></tr
><tr id="gr_svn42_1261"

><td id="1261"><a href="#1261">1261</a></td></tr
><tr id="gr_svn42_1262"

><td id="1262"><a href="#1262">1262</a></td></tr
><tr id="gr_svn42_1263"

><td id="1263"><a href="#1263">1263</a></td></tr
><tr id="gr_svn42_1264"

><td id="1264"><a href="#1264">1264</a></td></tr
><tr id="gr_svn42_1265"

><td id="1265"><a href="#1265">1265</a></td></tr
><tr id="gr_svn42_1266"

><td id="1266"><a href="#1266">1266</a></td></tr
><tr id="gr_svn42_1267"

><td id="1267"><a href="#1267">1267</a></td></tr
><tr id="gr_svn42_1268"

><td id="1268"><a href="#1268">1268</a></td></tr
><tr id="gr_svn42_1269"

><td id="1269"><a href="#1269">1269</a></td></tr
><tr id="gr_svn42_1270"

><td id="1270"><a href="#1270">1270</a></td></tr
><tr id="gr_svn42_1271"

><td id="1271"><a href="#1271">1271</a></td></tr
><tr id="gr_svn42_1272"

><td id="1272"><a href="#1272">1272</a></td></tr
><tr id="gr_svn42_1273"

><td id="1273"><a href="#1273">1273</a></td></tr
><tr id="gr_svn42_1274"

><td id="1274"><a href="#1274">1274</a></td></tr
><tr id="gr_svn42_1275"

><td id="1275"><a href="#1275">1275</a></td></tr
><tr id="gr_svn42_1276"

><td id="1276"><a href="#1276">1276</a></td></tr
><tr id="gr_svn42_1277"

><td id="1277"><a href="#1277">1277</a></td></tr
><tr id="gr_svn42_1278"

><td id="1278"><a href="#1278">1278</a></td></tr
><tr id="gr_svn42_1279"

><td id="1279"><a href="#1279">1279</a></td></tr
><tr id="gr_svn42_1280"

><td id="1280"><a href="#1280">1280</a></td></tr
><tr id="gr_svn42_1281"

><td id="1281"><a href="#1281">1281</a></td></tr
><tr id="gr_svn42_1282"

><td id="1282"><a href="#1282">1282</a></td></tr
><tr id="gr_svn42_1283"

><td id="1283"><a href="#1283">1283</a></td></tr
><tr id="gr_svn42_1284"

><td id="1284"><a href="#1284">1284</a></td></tr
><tr id="gr_svn42_1285"

><td id="1285"><a href="#1285">1285</a></td></tr
><tr id="gr_svn42_1286"

><td id="1286"><a href="#1286">1286</a></td></tr
><tr id="gr_svn42_1287"

><td id="1287"><a href="#1287">1287</a></td></tr
><tr id="gr_svn42_1288"

><td id="1288"><a href="#1288">1288</a></td></tr
><tr id="gr_svn42_1289"

><td id="1289"><a href="#1289">1289</a></td></tr
><tr id="gr_svn42_1290"

><td id="1290"><a href="#1290">1290</a></td></tr
><tr id="gr_svn42_1291"

><td id="1291"><a href="#1291">1291</a></td></tr
><tr id="gr_svn42_1292"

><td id="1292"><a href="#1292">1292</a></td></tr
><tr id="gr_svn42_1293"

><td id="1293"><a href="#1293">1293</a></td></tr
><tr id="gr_svn42_1294"

><td id="1294"><a href="#1294">1294</a></td></tr
><tr id="gr_svn42_1295"

><td id="1295"><a href="#1295">1295</a></td></tr
><tr id="gr_svn42_1296"

><td id="1296"><a href="#1296">1296</a></td></tr
><tr id="gr_svn42_1297"

><td id="1297"><a href="#1297">1297</a></td></tr
><tr id="gr_svn42_1298"

><td id="1298"><a href="#1298">1298</a></td></tr
><tr id="gr_svn42_1299"

><td id="1299"><a href="#1299">1299</a></td></tr
><tr id="gr_svn42_1300"

><td id="1300"><a href="#1300">1300</a></td></tr
><tr id="gr_svn42_1301"

><td id="1301"><a href="#1301">1301</a></td></tr
><tr id="gr_svn42_1302"

><td id="1302"><a href="#1302">1302</a></td></tr
><tr id="gr_svn42_1303"

><td id="1303"><a href="#1303">1303</a></td></tr
><tr id="gr_svn42_1304"

><td id="1304"><a href="#1304">1304</a></td></tr
><tr id="gr_svn42_1305"

><td id="1305"><a href="#1305">1305</a></td></tr
><tr id="gr_svn42_1306"

><td id="1306"><a href="#1306">1306</a></td></tr
><tr id="gr_svn42_1307"

><td id="1307"><a href="#1307">1307</a></td></tr
><tr id="gr_svn42_1308"

><td id="1308"><a href="#1308">1308</a></td></tr
><tr id="gr_svn42_1309"

><td id="1309"><a href="#1309">1309</a></td></tr
><tr id="gr_svn42_1310"

><td id="1310"><a href="#1310">1310</a></td></tr
><tr id="gr_svn42_1311"

><td id="1311"><a href="#1311">1311</a></td></tr
><tr id="gr_svn42_1312"

><td id="1312"><a href="#1312">1312</a></td></tr
><tr id="gr_svn42_1313"

><td id="1313"><a href="#1313">1313</a></td></tr
><tr id="gr_svn42_1314"

><td id="1314"><a href="#1314">1314</a></td></tr
><tr id="gr_svn42_1315"

><td id="1315"><a href="#1315">1315</a></td></tr
><tr id="gr_svn42_1316"

><td id="1316"><a href="#1316">1316</a></td></tr
><tr id="gr_svn42_1317"

><td id="1317"><a href="#1317">1317</a></td></tr
><tr id="gr_svn42_1318"

><td id="1318"><a href="#1318">1318</a></td></tr
><tr id="gr_svn42_1319"

><td id="1319"><a href="#1319">1319</a></td></tr
><tr id="gr_svn42_1320"

><td id="1320"><a href="#1320">1320</a></td></tr
><tr id="gr_svn42_1321"

><td id="1321"><a href="#1321">1321</a></td></tr
><tr id="gr_svn42_1322"

><td id="1322"><a href="#1322">1322</a></td></tr
><tr id="gr_svn42_1323"

><td id="1323"><a href="#1323">1323</a></td></tr
><tr id="gr_svn42_1324"

><td id="1324"><a href="#1324">1324</a></td></tr
><tr id="gr_svn42_1325"

><td id="1325"><a href="#1325">1325</a></td></tr
><tr id="gr_svn42_1326"

><td id="1326"><a href="#1326">1326</a></td></tr
><tr id="gr_svn42_1327"

><td id="1327"><a href="#1327">1327</a></td></tr
><tr id="gr_svn42_1328"

><td id="1328"><a href="#1328">1328</a></td></tr
><tr id="gr_svn42_1329"

><td id="1329"><a href="#1329">1329</a></td></tr
><tr id="gr_svn42_1330"

><td id="1330"><a href="#1330">1330</a></td></tr
><tr id="gr_svn42_1331"

><td id="1331"><a href="#1331">1331</a></td></tr
><tr id="gr_svn42_1332"

><td id="1332"><a href="#1332">1332</a></td></tr
><tr id="gr_svn42_1333"

><td id="1333"><a href="#1333">1333</a></td></tr
><tr id="gr_svn42_1334"

><td id="1334"><a href="#1334">1334</a></td></tr
><tr id="gr_svn42_1335"

><td id="1335"><a href="#1335">1335</a></td></tr
><tr id="gr_svn42_1336"

><td id="1336"><a href="#1336">1336</a></td></tr
><tr id="gr_svn42_1337"

><td id="1337"><a href="#1337">1337</a></td></tr
><tr id="gr_svn42_1338"

><td id="1338"><a href="#1338">1338</a></td></tr
><tr id="gr_svn42_1339"

><td id="1339"><a href="#1339">1339</a></td></tr
><tr id="gr_svn42_1340"

><td id="1340"><a href="#1340">1340</a></td></tr
><tr id="gr_svn42_1341"

><td id="1341"><a href="#1341">1341</a></td></tr
><tr id="gr_svn42_1342"

><td id="1342"><a href="#1342">1342</a></td></tr
><tr id="gr_svn42_1343"

><td id="1343"><a href="#1343">1343</a></td></tr
><tr id="gr_svn42_1344"

><td id="1344"><a href="#1344">1344</a></td></tr
><tr id="gr_svn42_1345"

><td id="1345"><a href="#1345">1345</a></td></tr
><tr id="gr_svn42_1346"

><td id="1346"><a href="#1346">1346</a></td></tr
><tr id="gr_svn42_1347"

><td id="1347"><a href="#1347">1347</a></td></tr
><tr id="gr_svn42_1348"

><td id="1348"><a href="#1348">1348</a></td></tr
><tr id="gr_svn42_1349"

><td id="1349"><a href="#1349">1349</a></td></tr
><tr id="gr_svn42_1350"

><td id="1350"><a href="#1350">1350</a></td></tr
><tr id="gr_svn42_1351"

><td id="1351"><a href="#1351">1351</a></td></tr
><tr id="gr_svn42_1352"

><td id="1352"><a href="#1352">1352</a></td></tr
><tr id="gr_svn42_1353"

><td id="1353"><a href="#1353">1353</a></td></tr
><tr id="gr_svn42_1354"

><td id="1354"><a href="#1354">1354</a></td></tr
><tr id="gr_svn42_1355"

><td id="1355"><a href="#1355">1355</a></td></tr
><tr id="gr_svn42_1356"

><td id="1356"><a href="#1356">1356</a></td></tr
><tr id="gr_svn42_1357"

><td id="1357"><a href="#1357">1357</a></td></tr
><tr id="gr_svn42_1358"

><td id="1358"><a href="#1358">1358</a></td></tr
><tr id="gr_svn42_1359"

><td id="1359"><a href="#1359">1359</a></td></tr
><tr id="gr_svn42_1360"

><td id="1360"><a href="#1360">1360</a></td></tr
><tr id="gr_svn42_1361"

><td id="1361"><a href="#1361">1361</a></td></tr
><tr id="gr_svn42_1362"

><td id="1362"><a href="#1362">1362</a></td></tr
><tr id="gr_svn42_1363"

><td id="1363"><a href="#1363">1363</a></td></tr
><tr id="gr_svn42_1364"

><td id="1364"><a href="#1364">1364</a></td></tr
><tr id="gr_svn42_1365"

><td id="1365"><a href="#1365">1365</a></td></tr
><tr id="gr_svn42_1366"

><td id="1366"><a href="#1366">1366</a></td></tr
><tr id="gr_svn42_1367"

><td id="1367"><a href="#1367">1367</a></td></tr
><tr id="gr_svn42_1368"

><td id="1368"><a href="#1368">1368</a></td></tr
><tr id="gr_svn42_1369"

><td id="1369"><a href="#1369">1369</a></td></tr
><tr id="gr_svn42_1370"

><td id="1370"><a href="#1370">1370</a></td></tr
><tr id="gr_svn42_1371"

><td id="1371"><a href="#1371">1371</a></td></tr
><tr id="gr_svn42_1372"

><td id="1372"><a href="#1372">1372</a></td></tr
><tr id="gr_svn42_1373"

><td id="1373"><a href="#1373">1373</a></td></tr
><tr id="gr_svn42_1374"

><td id="1374"><a href="#1374">1374</a></td></tr
><tr id="gr_svn42_1375"

><td id="1375"><a href="#1375">1375</a></td></tr
><tr id="gr_svn42_1376"

><td id="1376"><a href="#1376">1376</a></td></tr
><tr id="gr_svn42_1377"

><td id="1377"><a href="#1377">1377</a></td></tr
><tr id="gr_svn42_1378"

><td id="1378"><a href="#1378">1378</a></td></tr
><tr id="gr_svn42_1379"

><td id="1379"><a href="#1379">1379</a></td></tr
><tr id="gr_svn42_1380"

><td id="1380"><a href="#1380">1380</a></td></tr
><tr id="gr_svn42_1381"

><td id="1381"><a href="#1381">1381</a></td></tr
><tr id="gr_svn42_1382"

><td id="1382"><a href="#1382">1382</a></td></tr
><tr id="gr_svn42_1383"

><td id="1383"><a href="#1383">1383</a></td></tr
><tr id="gr_svn42_1384"

><td id="1384"><a href="#1384">1384</a></td></tr
><tr id="gr_svn42_1385"

><td id="1385"><a href="#1385">1385</a></td></tr
><tr id="gr_svn42_1386"

><td id="1386"><a href="#1386">1386</a></td></tr
><tr id="gr_svn42_1387"

><td id="1387"><a href="#1387">1387</a></td></tr
><tr id="gr_svn42_1388"

><td id="1388"><a href="#1388">1388</a></td></tr
><tr id="gr_svn42_1389"

><td id="1389"><a href="#1389">1389</a></td></tr
><tr id="gr_svn42_1390"

><td id="1390"><a href="#1390">1390</a></td></tr
><tr id="gr_svn42_1391"

><td id="1391"><a href="#1391">1391</a></td></tr
><tr id="gr_svn42_1392"

><td id="1392"><a href="#1392">1392</a></td></tr
><tr id="gr_svn42_1393"

><td id="1393"><a href="#1393">1393</a></td></tr
><tr id="gr_svn42_1394"

><td id="1394"><a href="#1394">1394</a></td></tr
><tr id="gr_svn42_1395"

><td id="1395"><a href="#1395">1395</a></td></tr
><tr id="gr_svn42_1396"

><td id="1396"><a href="#1396">1396</a></td></tr
><tr id="gr_svn42_1397"

><td id="1397"><a href="#1397">1397</a></td></tr
><tr id="gr_svn42_1398"

><td id="1398"><a href="#1398">1398</a></td></tr
><tr id="gr_svn42_1399"

><td id="1399"><a href="#1399">1399</a></td></tr
><tr id="gr_svn42_1400"

><td id="1400"><a href="#1400">1400</a></td></tr
><tr id="gr_svn42_1401"

><td id="1401"><a href="#1401">1401</a></td></tr
><tr id="gr_svn42_1402"

><td id="1402"><a href="#1402">1402</a></td></tr
><tr id="gr_svn42_1403"

><td id="1403"><a href="#1403">1403</a></td></tr
><tr id="gr_svn42_1404"

><td id="1404"><a href="#1404">1404</a></td></tr
><tr id="gr_svn42_1405"

><td id="1405"><a href="#1405">1405</a></td></tr
><tr id="gr_svn42_1406"

><td id="1406"><a href="#1406">1406</a></td></tr
><tr id="gr_svn42_1407"

><td id="1407"><a href="#1407">1407</a></td></tr
><tr id="gr_svn42_1408"

><td id="1408"><a href="#1408">1408</a></td></tr
><tr id="gr_svn42_1409"

><td id="1409"><a href="#1409">1409</a></td></tr
><tr id="gr_svn42_1410"

><td id="1410"><a href="#1410">1410</a></td></tr
><tr id="gr_svn42_1411"

><td id="1411"><a href="#1411">1411</a></td></tr
><tr id="gr_svn42_1412"

><td id="1412"><a href="#1412">1412</a></td></tr
><tr id="gr_svn42_1413"

><td id="1413"><a href="#1413">1413</a></td></tr
><tr id="gr_svn42_1414"

><td id="1414"><a href="#1414">1414</a></td></tr
><tr id="gr_svn42_1415"

><td id="1415"><a href="#1415">1415</a></td></tr
><tr id="gr_svn42_1416"

><td id="1416"><a href="#1416">1416</a></td></tr
><tr id="gr_svn42_1417"

><td id="1417"><a href="#1417">1417</a></td></tr
><tr id="gr_svn42_1418"

><td id="1418"><a href="#1418">1418</a></td></tr
><tr id="gr_svn42_1419"

><td id="1419"><a href="#1419">1419</a></td></tr
><tr id="gr_svn42_1420"

><td id="1420"><a href="#1420">1420</a></td></tr
><tr id="gr_svn42_1421"

><td id="1421"><a href="#1421">1421</a></td></tr
><tr id="gr_svn42_1422"

><td id="1422"><a href="#1422">1422</a></td></tr
><tr id="gr_svn42_1423"

><td id="1423"><a href="#1423">1423</a></td></tr
><tr id="gr_svn42_1424"

><td id="1424"><a href="#1424">1424</a></td></tr
><tr id="gr_svn42_1425"

><td id="1425"><a href="#1425">1425</a></td></tr
><tr id="gr_svn42_1426"

><td id="1426"><a href="#1426">1426</a></td></tr
><tr id="gr_svn42_1427"

><td id="1427"><a href="#1427">1427</a></td></tr
><tr id="gr_svn42_1428"

><td id="1428"><a href="#1428">1428</a></td></tr
><tr id="gr_svn42_1429"

><td id="1429"><a href="#1429">1429</a></td></tr
><tr id="gr_svn42_1430"

><td id="1430"><a href="#1430">1430</a></td></tr
><tr id="gr_svn42_1431"

><td id="1431"><a href="#1431">1431</a></td></tr
><tr id="gr_svn42_1432"

><td id="1432"><a href="#1432">1432</a></td></tr
><tr id="gr_svn42_1433"

><td id="1433"><a href="#1433">1433</a></td></tr
><tr id="gr_svn42_1434"

><td id="1434"><a href="#1434">1434</a></td></tr
><tr id="gr_svn42_1435"

><td id="1435"><a href="#1435">1435</a></td></tr
><tr id="gr_svn42_1436"

><td id="1436"><a href="#1436">1436</a></td></tr
><tr id="gr_svn42_1437"

><td id="1437"><a href="#1437">1437</a></td></tr
><tr id="gr_svn42_1438"

><td id="1438"><a href="#1438">1438</a></td></tr
><tr id="gr_svn42_1439"

><td id="1439"><a href="#1439">1439</a></td></tr
><tr id="gr_svn42_1440"

><td id="1440"><a href="#1440">1440</a></td></tr
><tr id="gr_svn42_1441"

><td id="1441"><a href="#1441">1441</a></td></tr
><tr id="gr_svn42_1442"

><td id="1442"><a href="#1442">1442</a></td></tr
><tr id="gr_svn42_1443"

><td id="1443"><a href="#1443">1443</a></td></tr
><tr id="gr_svn42_1444"

><td id="1444"><a href="#1444">1444</a></td></tr
><tr id="gr_svn42_1445"

><td id="1445"><a href="#1445">1445</a></td></tr
><tr id="gr_svn42_1446"

><td id="1446"><a href="#1446">1446</a></td></tr
><tr id="gr_svn42_1447"

><td id="1447"><a href="#1447">1447</a></td></tr
><tr id="gr_svn42_1448"

><td id="1448"><a href="#1448">1448</a></td></tr
><tr id="gr_svn42_1449"

><td id="1449"><a href="#1449">1449</a></td></tr
><tr id="gr_svn42_1450"

><td id="1450"><a href="#1450">1450</a></td></tr
><tr id="gr_svn42_1451"

><td id="1451"><a href="#1451">1451</a></td></tr
><tr id="gr_svn42_1452"

><td id="1452"><a href="#1452">1452</a></td></tr
><tr id="gr_svn42_1453"

><td id="1453"><a href="#1453">1453</a></td></tr
><tr id="gr_svn42_1454"

><td id="1454"><a href="#1454">1454</a></td></tr
><tr id="gr_svn42_1455"

><td id="1455"><a href="#1455">1455</a></td></tr
><tr id="gr_svn42_1456"

><td id="1456"><a href="#1456">1456</a></td></tr
><tr id="gr_svn42_1457"

><td id="1457"><a href="#1457">1457</a></td></tr
><tr id="gr_svn42_1458"

><td id="1458"><a href="#1458">1458</a></td></tr
><tr id="gr_svn42_1459"

><td id="1459"><a href="#1459">1459</a></td></tr
><tr id="gr_svn42_1460"

><td id="1460"><a href="#1460">1460</a></td></tr
><tr id="gr_svn42_1461"

><td id="1461"><a href="#1461">1461</a></td></tr
><tr id="gr_svn42_1462"

><td id="1462"><a href="#1462">1462</a></td></tr
><tr id="gr_svn42_1463"

><td id="1463"><a href="#1463">1463</a></td></tr
><tr id="gr_svn42_1464"

><td id="1464"><a href="#1464">1464</a></td></tr
><tr id="gr_svn42_1465"

><td id="1465"><a href="#1465">1465</a></td></tr
><tr id="gr_svn42_1466"

><td id="1466"><a href="#1466">1466</a></td></tr
><tr id="gr_svn42_1467"

><td id="1467"><a href="#1467">1467</a></td></tr
><tr id="gr_svn42_1468"

><td id="1468"><a href="#1468">1468</a></td></tr
><tr id="gr_svn42_1469"

><td id="1469"><a href="#1469">1469</a></td></tr
><tr id="gr_svn42_1470"

><td id="1470"><a href="#1470">1470</a></td></tr
><tr id="gr_svn42_1471"

><td id="1471"><a href="#1471">1471</a></td></tr
><tr id="gr_svn42_1472"

><td id="1472"><a href="#1472">1472</a></td></tr
><tr id="gr_svn42_1473"

><td id="1473"><a href="#1473">1473</a></td></tr
><tr id="gr_svn42_1474"

><td id="1474"><a href="#1474">1474</a></td></tr
><tr id="gr_svn42_1475"

><td id="1475"><a href="#1475">1475</a></td></tr
><tr id="gr_svn42_1476"

><td id="1476"><a href="#1476">1476</a></td></tr
><tr id="gr_svn42_1477"

><td id="1477"><a href="#1477">1477</a></td></tr
><tr id="gr_svn42_1478"

><td id="1478"><a href="#1478">1478</a></td></tr
><tr id="gr_svn42_1479"

><td id="1479"><a href="#1479">1479</a></td></tr
><tr id="gr_svn42_1480"

><td id="1480"><a href="#1480">1480</a></td></tr
><tr id="gr_svn42_1481"

><td id="1481"><a href="#1481">1481</a></td></tr
><tr id="gr_svn42_1482"

><td id="1482"><a href="#1482">1482</a></td></tr
><tr id="gr_svn42_1483"

><td id="1483"><a href="#1483">1483</a></td></tr
><tr id="gr_svn42_1484"

><td id="1484"><a href="#1484">1484</a></td></tr
><tr id="gr_svn42_1485"

><td id="1485"><a href="#1485">1485</a></td></tr
><tr id="gr_svn42_1486"

><td id="1486"><a href="#1486">1486</a></td></tr
><tr id="gr_svn42_1487"

><td id="1487"><a href="#1487">1487</a></td></tr
><tr id="gr_svn42_1488"

><td id="1488"><a href="#1488">1488</a></td></tr
><tr id="gr_svn42_1489"

><td id="1489"><a href="#1489">1489</a></td></tr
><tr id="gr_svn42_1490"

><td id="1490"><a href="#1490">1490</a></td></tr
><tr id="gr_svn42_1491"

><td id="1491"><a href="#1491">1491</a></td></tr
><tr id="gr_svn42_1492"

><td id="1492"><a href="#1492">1492</a></td></tr
><tr id="gr_svn42_1493"

><td id="1493"><a href="#1493">1493</a></td></tr
><tr id="gr_svn42_1494"

><td id="1494"><a href="#1494">1494</a></td></tr
><tr id="gr_svn42_1495"

><td id="1495"><a href="#1495">1495</a></td></tr
><tr id="gr_svn42_1496"

><td id="1496"><a href="#1496">1496</a></td></tr
><tr id="gr_svn42_1497"

><td id="1497"><a href="#1497">1497</a></td></tr
><tr id="gr_svn42_1498"

><td id="1498"><a href="#1498">1498</a></td></tr
><tr id="gr_svn42_1499"

><td id="1499"><a href="#1499">1499</a></td></tr
><tr id="gr_svn42_1500"

><td id="1500"><a href="#1500">1500</a></td></tr
><tr id="gr_svn42_1501"

><td id="1501"><a href="#1501">1501</a></td></tr
><tr id="gr_svn42_1502"

><td id="1502"><a href="#1502">1502</a></td></tr
><tr id="gr_svn42_1503"

><td id="1503"><a href="#1503">1503</a></td></tr
><tr id="gr_svn42_1504"

><td id="1504"><a href="#1504">1504</a></td></tr
><tr id="gr_svn42_1505"

><td id="1505"><a href="#1505">1505</a></td></tr
><tr id="gr_svn42_1506"

><td id="1506"><a href="#1506">1506</a></td></tr
><tr id="gr_svn42_1507"

><td id="1507"><a href="#1507">1507</a></td></tr
><tr id="gr_svn42_1508"

><td id="1508"><a href="#1508">1508</a></td></tr
><tr id="gr_svn42_1509"

><td id="1509"><a href="#1509">1509</a></td></tr
><tr id="gr_svn42_1510"

><td id="1510"><a href="#1510">1510</a></td></tr
><tr id="gr_svn42_1511"

><td id="1511"><a href="#1511">1511</a></td></tr
><tr id="gr_svn42_1512"

><td id="1512"><a href="#1512">1512</a></td></tr
><tr id="gr_svn42_1513"

><td id="1513"><a href="#1513">1513</a></td></tr
><tr id="gr_svn42_1514"

><td id="1514"><a href="#1514">1514</a></td></tr
><tr id="gr_svn42_1515"

><td id="1515"><a href="#1515">1515</a></td></tr
><tr id="gr_svn42_1516"

><td id="1516"><a href="#1516">1516</a></td></tr
><tr id="gr_svn42_1517"

><td id="1517"><a href="#1517">1517</a></td></tr
><tr id="gr_svn42_1518"

><td id="1518"><a href="#1518">1518</a></td></tr
><tr id="gr_svn42_1519"

><td id="1519"><a href="#1519">1519</a></td></tr
><tr id="gr_svn42_1520"

><td id="1520"><a href="#1520">1520</a></td></tr
><tr id="gr_svn42_1521"

><td id="1521"><a href="#1521">1521</a></td></tr
><tr id="gr_svn42_1522"

><td id="1522"><a href="#1522">1522</a></td></tr
><tr id="gr_svn42_1523"

><td id="1523"><a href="#1523">1523</a></td></tr
><tr id="gr_svn42_1524"

><td id="1524"><a href="#1524">1524</a></td></tr
><tr id="gr_svn42_1525"

><td id="1525"><a href="#1525">1525</a></td></tr
><tr id="gr_svn42_1526"

><td id="1526"><a href="#1526">1526</a></td></tr
><tr id="gr_svn42_1527"

><td id="1527"><a href="#1527">1527</a></td></tr
><tr id="gr_svn42_1528"

><td id="1528"><a href="#1528">1528</a></td></tr
><tr id="gr_svn42_1529"

><td id="1529"><a href="#1529">1529</a></td></tr
><tr id="gr_svn42_1530"

><td id="1530"><a href="#1530">1530</a></td></tr
><tr id="gr_svn42_1531"

><td id="1531"><a href="#1531">1531</a></td></tr
><tr id="gr_svn42_1532"

><td id="1532"><a href="#1532">1532</a></td></tr
><tr id="gr_svn42_1533"

><td id="1533"><a href="#1533">1533</a></td></tr
><tr id="gr_svn42_1534"

><td id="1534"><a href="#1534">1534</a></td></tr
><tr id="gr_svn42_1535"

><td id="1535"><a href="#1535">1535</a></td></tr
><tr id="gr_svn42_1536"

><td id="1536"><a href="#1536">1536</a></td></tr
><tr id="gr_svn42_1537"

><td id="1537"><a href="#1537">1537</a></td></tr
><tr id="gr_svn42_1538"

><td id="1538"><a href="#1538">1538</a></td></tr
><tr id="gr_svn42_1539"

><td id="1539"><a href="#1539">1539</a></td></tr
><tr id="gr_svn42_1540"

><td id="1540"><a href="#1540">1540</a></td></tr
><tr id="gr_svn42_1541"

><td id="1541"><a href="#1541">1541</a></td></tr
><tr id="gr_svn42_1542"

><td id="1542"><a href="#1542">1542</a></td></tr
><tr id="gr_svn42_1543"

><td id="1543"><a href="#1543">1543</a></td></tr
><tr id="gr_svn42_1544"

><td id="1544"><a href="#1544">1544</a></td></tr
><tr id="gr_svn42_1545"

><td id="1545"><a href="#1545">1545</a></td></tr
><tr id="gr_svn42_1546"

><td id="1546"><a href="#1546">1546</a></td></tr
><tr id="gr_svn42_1547"

><td id="1547"><a href="#1547">1547</a></td></tr
><tr id="gr_svn42_1548"

><td id="1548"><a href="#1548">1548</a></td></tr
><tr id="gr_svn42_1549"

><td id="1549"><a href="#1549">1549</a></td></tr
><tr id="gr_svn42_1550"

><td id="1550"><a href="#1550">1550</a></td></tr
><tr id="gr_svn42_1551"

><td id="1551"><a href="#1551">1551</a></td></tr
><tr id="gr_svn42_1552"

><td id="1552"><a href="#1552">1552</a></td></tr
><tr id="gr_svn42_1553"

><td id="1553"><a href="#1553">1553</a></td></tr
><tr id="gr_svn42_1554"

><td id="1554"><a href="#1554">1554</a></td></tr
><tr id="gr_svn42_1555"

><td id="1555"><a href="#1555">1555</a></td></tr
><tr id="gr_svn42_1556"

><td id="1556"><a href="#1556">1556</a></td></tr
><tr id="gr_svn42_1557"

><td id="1557"><a href="#1557">1557</a></td></tr
><tr id="gr_svn42_1558"

><td id="1558"><a href="#1558">1558</a></td></tr
><tr id="gr_svn42_1559"

><td id="1559"><a href="#1559">1559</a></td></tr
><tr id="gr_svn42_1560"

><td id="1560"><a href="#1560">1560</a></td></tr
><tr id="gr_svn42_1561"

><td id="1561"><a href="#1561">1561</a></td></tr
><tr id="gr_svn42_1562"

><td id="1562"><a href="#1562">1562</a></td></tr
><tr id="gr_svn42_1563"

><td id="1563"><a href="#1563">1563</a></td></tr
><tr id="gr_svn42_1564"

><td id="1564"><a href="#1564">1564</a></td></tr
><tr id="gr_svn42_1565"

><td id="1565"><a href="#1565">1565</a></td></tr
><tr id="gr_svn42_1566"

><td id="1566"><a href="#1566">1566</a></td></tr
><tr id="gr_svn42_1567"

><td id="1567"><a href="#1567">1567</a></td></tr
><tr id="gr_svn42_1568"

><td id="1568"><a href="#1568">1568</a></td></tr
><tr id="gr_svn42_1569"

><td id="1569"><a href="#1569">1569</a></td></tr
><tr id="gr_svn42_1570"

><td id="1570"><a href="#1570">1570</a></td></tr
><tr id="gr_svn42_1571"

><td id="1571"><a href="#1571">1571</a></td></tr
><tr id="gr_svn42_1572"

><td id="1572"><a href="#1572">1572</a></td></tr
><tr id="gr_svn42_1573"

><td id="1573"><a href="#1573">1573</a></td></tr
><tr id="gr_svn42_1574"

><td id="1574"><a href="#1574">1574</a></td></tr
><tr id="gr_svn42_1575"

><td id="1575"><a href="#1575">1575</a></td></tr
><tr id="gr_svn42_1576"

><td id="1576"><a href="#1576">1576</a></td></tr
><tr id="gr_svn42_1577"

><td id="1577"><a href="#1577">1577</a></td></tr
><tr id="gr_svn42_1578"

><td id="1578"><a href="#1578">1578</a></td></tr
><tr id="gr_svn42_1579"

><td id="1579"><a href="#1579">1579</a></td></tr
><tr id="gr_svn42_1580"

><td id="1580"><a href="#1580">1580</a></td></tr
><tr id="gr_svn42_1581"

><td id="1581"><a href="#1581">1581</a></td></tr
><tr id="gr_svn42_1582"

><td id="1582"><a href="#1582">1582</a></td></tr
><tr id="gr_svn42_1583"

><td id="1583"><a href="#1583">1583</a></td></tr
><tr id="gr_svn42_1584"

><td id="1584"><a href="#1584">1584</a></td></tr
><tr id="gr_svn42_1585"

><td id="1585"><a href="#1585">1585</a></td></tr
><tr id="gr_svn42_1586"

><td id="1586"><a href="#1586">1586</a></td></tr
><tr id="gr_svn42_1587"

><td id="1587"><a href="#1587">1587</a></td></tr
><tr id="gr_svn42_1588"

><td id="1588"><a href="#1588">1588</a></td></tr
><tr id="gr_svn42_1589"

><td id="1589"><a href="#1589">1589</a></td></tr
><tr id="gr_svn42_1590"

><td id="1590"><a href="#1590">1590</a></td></tr
><tr id="gr_svn42_1591"

><td id="1591"><a href="#1591">1591</a></td></tr
><tr id="gr_svn42_1592"

><td id="1592"><a href="#1592">1592</a></td></tr
><tr id="gr_svn42_1593"

><td id="1593"><a href="#1593">1593</a></td></tr
><tr id="gr_svn42_1594"

><td id="1594"><a href="#1594">1594</a></td></tr
><tr id="gr_svn42_1595"

><td id="1595"><a href="#1595">1595</a></td></tr
><tr id="gr_svn42_1596"

><td id="1596"><a href="#1596">1596</a></td></tr
><tr id="gr_svn42_1597"

><td id="1597"><a href="#1597">1597</a></td></tr
><tr id="gr_svn42_1598"

><td id="1598"><a href="#1598">1598</a></td></tr
><tr id="gr_svn42_1599"

><td id="1599"><a href="#1599">1599</a></td></tr
><tr id="gr_svn42_1600"

><td id="1600"><a href="#1600">1600</a></td></tr
><tr id="gr_svn42_1601"

><td id="1601"><a href="#1601">1601</a></td></tr
><tr id="gr_svn42_1602"

><td id="1602"><a href="#1602">1602</a></td></tr
><tr id="gr_svn42_1603"

><td id="1603"><a href="#1603">1603</a></td></tr
><tr id="gr_svn42_1604"

><td id="1604"><a href="#1604">1604</a></td></tr
><tr id="gr_svn42_1605"

><td id="1605"><a href="#1605">1605</a></td></tr
><tr id="gr_svn42_1606"

><td id="1606"><a href="#1606">1606</a></td></tr
><tr id="gr_svn42_1607"

><td id="1607"><a href="#1607">1607</a></td></tr
><tr id="gr_svn42_1608"

><td id="1608"><a href="#1608">1608</a></td></tr
><tr id="gr_svn42_1609"

><td id="1609"><a href="#1609">1609</a></td></tr
><tr id="gr_svn42_1610"

><td id="1610"><a href="#1610">1610</a></td></tr
><tr id="gr_svn42_1611"

><td id="1611"><a href="#1611">1611</a></td></tr
><tr id="gr_svn42_1612"

><td id="1612"><a href="#1612">1612</a></td></tr
><tr id="gr_svn42_1613"

><td id="1613"><a href="#1613">1613</a></td></tr
><tr id="gr_svn42_1614"

><td id="1614"><a href="#1614">1614</a></td></tr
><tr id="gr_svn42_1615"

><td id="1615"><a href="#1615">1615</a></td></tr
><tr id="gr_svn42_1616"

><td id="1616"><a href="#1616">1616</a></td></tr
><tr id="gr_svn42_1617"

><td id="1617"><a href="#1617">1617</a></td></tr
><tr id="gr_svn42_1618"

><td id="1618"><a href="#1618">1618</a></td></tr
><tr id="gr_svn42_1619"

><td id="1619"><a href="#1619">1619</a></td></tr
><tr id="gr_svn42_1620"

><td id="1620"><a href="#1620">1620</a></td></tr
><tr id="gr_svn42_1621"

><td id="1621"><a href="#1621">1621</a></td></tr
><tr id="gr_svn42_1622"

><td id="1622"><a href="#1622">1622</a></td></tr
><tr id="gr_svn42_1623"

><td id="1623"><a href="#1623">1623</a></td></tr
><tr id="gr_svn42_1624"

><td id="1624"><a href="#1624">1624</a></td></tr
><tr id="gr_svn42_1625"

><td id="1625"><a href="#1625">1625</a></td></tr
><tr id="gr_svn42_1626"

><td id="1626"><a href="#1626">1626</a></td></tr
><tr id="gr_svn42_1627"

><td id="1627"><a href="#1627">1627</a></td></tr
><tr id="gr_svn42_1628"

><td id="1628"><a href="#1628">1628</a></td></tr
><tr id="gr_svn42_1629"

><td id="1629"><a href="#1629">1629</a></td></tr
><tr id="gr_svn42_1630"

><td id="1630"><a href="#1630">1630</a></td></tr
><tr id="gr_svn42_1631"

><td id="1631"><a href="#1631">1631</a></td></tr
><tr id="gr_svn42_1632"

><td id="1632"><a href="#1632">1632</a></td></tr
><tr id="gr_svn42_1633"

><td id="1633"><a href="#1633">1633</a></td></tr
><tr id="gr_svn42_1634"

><td id="1634"><a href="#1634">1634</a></td></tr
><tr id="gr_svn42_1635"

><td id="1635"><a href="#1635">1635</a></td></tr
><tr id="gr_svn42_1636"

><td id="1636"><a href="#1636">1636</a></td></tr
><tr id="gr_svn42_1637"

><td id="1637"><a href="#1637">1637</a></td></tr
><tr id="gr_svn42_1638"

><td id="1638"><a href="#1638">1638</a></td></tr
><tr id="gr_svn42_1639"

><td id="1639"><a href="#1639">1639</a></td></tr
><tr id="gr_svn42_1640"

><td id="1640"><a href="#1640">1640</a></td></tr
><tr id="gr_svn42_1641"

><td id="1641"><a href="#1641">1641</a></td></tr
><tr id="gr_svn42_1642"

><td id="1642"><a href="#1642">1642</a></td></tr
><tr id="gr_svn42_1643"

><td id="1643"><a href="#1643">1643</a></td></tr
><tr id="gr_svn42_1644"

><td id="1644"><a href="#1644">1644</a></td></tr
><tr id="gr_svn42_1645"

><td id="1645"><a href="#1645">1645</a></td></tr
><tr id="gr_svn42_1646"

><td id="1646"><a href="#1646">1646</a></td></tr
><tr id="gr_svn42_1647"

><td id="1647"><a href="#1647">1647</a></td></tr
><tr id="gr_svn42_1648"

><td id="1648"><a href="#1648">1648</a></td></tr
><tr id="gr_svn42_1649"

><td id="1649"><a href="#1649">1649</a></td></tr
><tr id="gr_svn42_1650"

><td id="1650"><a href="#1650">1650</a></td></tr
><tr id="gr_svn42_1651"

><td id="1651"><a href="#1651">1651</a></td></tr
><tr id="gr_svn42_1652"

><td id="1652"><a href="#1652">1652</a></td></tr
><tr id="gr_svn42_1653"

><td id="1653"><a href="#1653">1653</a></td></tr
><tr id="gr_svn42_1654"

><td id="1654"><a href="#1654">1654</a></td></tr
><tr id="gr_svn42_1655"

><td id="1655"><a href="#1655">1655</a></td></tr
><tr id="gr_svn42_1656"

><td id="1656"><a href="#1656">1656</a></td></tr
><tr id="gr_svn42_1657"

><td id="1657"><a href="#1657">1657</a></td></tr
><tr id="gr_svn42_1658"

><td id="1658"><a href="#1658">1658</a></td></tr
><tr id="gr_svn42_1659"

><td id="1659"><a href="#1659">1659</a></td></tr
><tr id="gr_svn42_1660"

><td id="1660"><a href="#1660">1660</a></td></tr
><tr id="gr_svn42_1661"

><td id="1661"><a href="#1661">1661</a></td></tr
><tr id="gr_svn42_1662"

><td id="1662"><a href="#1662">1662</a></td></tr
><tr id="gr_svn42_1663"

><td id="1663"><a href="#1663">1663</a></td></tr
><tr id="gr_svn42_1664"

><td id="1664"><a href="#1664">1664</a></td></tr
><tr id="gr_svn42_1665"

><td id="1665"><a href="#1665">1665</a></td></tr
><tr id="gr_svn42_1666"

><td id="1666"><a href="#1666">1666</a></td></tr
><tr id="gr_svn42_1667"

><td id="1667"><a href="#1667">1667</a></td></tr
><tr id="gr_svn42_1668"

><td id="1668"><a href="#1668">1668</a></td></tr
><tr id="gr_svn42_1669"

><td id="1669"><a href="#1669">1669</a></td></tr
><tr id="gr_svn42_1670"

><td id="1670"><a href="#1670">1670</a></td></tr
><tr id="gr_svn42_1671"

><td id="1671"><a href="#1671">1671</a></td></tr
><tr id="gr_svn42_1672"

><td id="1672"><a href="#1672">1672</a></td></tr
><tr id="gr_svn42_1673"

><td id="1673"><a href="#1673">1673</a></td></tr
><tr id="gr_svn42_1674"

><td id="1674"><a href="#1674">1674</a></td></tr
><tr id="gr_svn42_1675"

><td id="1675"><a href="#1675">1675</a></td></tr
><tr id="gr_svn42_1676"

><td id="1676"><a href="#1676">1676</a></td></tr
><tr id="gr_svn42_1677"

><td id="1677"><a href="#1677">1677</a></td></tr
><tr id="gr_svn42_1678"

><td id="1678"><a href="#1678">1678</a></td></tr
><tr id="gr_svn42_1679"

><td id="1679"><a href="#1679">1679</a></td></tr
><tr id="gr_svn42_1680"

><td id="1680"><a href="#1680">1680</a></td></tr
><tr id="gr_svn42_1681"

><td id="1681"><a href="#1681">1681</a></td></tr
><tr id="gr_svn42_1682"

><td id="1682"><a href="#1682">1682</a></td></tr
><tr id="gr_svn42_1683"

><td id="1683"><a href="#1683">1683</a></td></tr
><tr id="gr_svn42_1684"

><td id="1684"><a href="#1684">1684</a></td></tr
><tr id="gr_svn42_1685"

><td id="1685"><a href="#1685">1685</a></td></tr
><tr id="gr_svn42_1686"

><td id="1686"><a href="#1686">1686</a></td></tr
><tr id="gr_svn42_1687"

><td id="1687"><a href="#1687">1687</a></td></tr
><tr id="gr_svn42_1688"

><td id="1688"><a href="#1688">1688</a></td></tr
><tr id="gr_svn42_1689"

><td id="1689"><a href="#1689">1689</a></td></tr
><tr id="gr_svn42_1690"

><td id="1690"><a href="#1690">1690</a></td></tr
><tr id="gr_svn42_1691"

><td id="1691"><a href="#1691">1691</a></td></tr
><tr id="gr_svn42_1692"

><td id="1692"><a href="#1692">1692</a></td></tr
><tr id="gr_svn42_1693"

><td id="1693"><a href="#1693">1693</a></td></tr
><tr id="gr_svn42_1694"

><td id="1694"><a href="#1694">1694</a></td></tr
><tr id="gr_svn42_1695"

><td id="1695"><a href="#1695">1695</a></td></tr
><tr id="gr_svn42_1696"

><td id="1696"><a href="#1696">1696</a></td></tr
><tr id="gr_svn42_1697"

><td id="1697"><a href="#1697">1697</a></td></tr
><tr id="gr_svn42_1698"

><td id="1698"><a href="#1698">1698</a></td></tr
><tr id="gr_svn42_1699"

><td id="1699"><a href="#1699">1699</a></td></tr
><tr id="gr_svn42_1700"

><td id="1700"><a href="#1700">1700</a></td></tr
><tr id="gr_svn42_1701"

><td id="1701"><a href="#1701">1701</a></td></tr
><tr id="gr_svn42_1702"

><td id="1702"><a href="#1702">1702</a></td></tr
><tr id="gr_svn42_1703"

><td id="1703"><a href="#1703">1703</a></td></tr
><tr id="gr_svn42_1704"

><td id="1704"><a href="#1704">1704</a></td></tr
><tr id="gr_svn42_1705"

><td id="1705"><a href="#1705">1705</a></td></tr
><tr id="gr_svn42_1706"

><td id="1706"><a href="#1706">1706</a></td></tr
><tr id="gr_svn42_1707"

><td id="1707"><a href="#1707">1707</a></td></tr
><tr id="gr_svn42_1708"

><td id="1708"><a href="#1708">1708</a></td></tr
><tr id="gr_svn42_1709"

><td id="1709"><a href="#1709">1709</a></td></tr
><tr id="gr_svn42_1710"

><td id="1710"><a href="#1710">1710</a></td></tr
><tr id="gr_svn42_1711"

><td id="1711"><a href="#1711">1711</a></td></tr
><tr id="gr_svn42_1712"

><td id="1712"><a href="#1712">1712</a></td></tr
><tr id="gr_svn42_1713"

><td id="1713"><a href="#1713">1713</a></td></tr
><tr id="gr_svn42_1714"

><td id="1714"><a href="#1714">1714</a></td></tr
><tr id="gr_svn42_1715"

><td id="1715"><a href="#1715">1715</a></td></tr
><tr id="gr_svn42_1716"

><td id="1716"><a href="#1716">1716</a></td></tr
><tr id="gr_svn42_1717"

><td id="1717"><a href="#1717">1717</a></td></tr
><tr id="gr_svn42_1718"

><td id="1718"><a href="#1718">1718</a></td></tr
><tr id="gr_svn42_1719"

><td id="1719"><a href="#1719">1719</a></td></tr
><tr id="gr_svn42_1720"

><td id="1720"><a href="#1720">1720</a></td></tr
><tr id="gr_svn42_1721"

><td id="1721"><a href="#1721">1721</a></td></tr
><tr id="gr_svn42_1722"

><td id="1722"><a href="#1722">1722</a></td></tr
><tr id="gr_svn42_1723"

><td id="1723"><a href="#1723">1723</a></td></tr
><tr id="gr_svn42_1724"

><td id="1724"><a href="#1724">1724</a></td></tr
><tr id="gr_svn42_1725"

><td id="1725"><a href="#1725">1725</a></td></tr
><tr id="gr_svn42_1726"

><td id="1726"><a href="#1726">1726</a></td></tr
><tr id="gr_svn42_1727"

><td id="1727"><a href="#1727">1727</a></td></tr
><tr id="gr_svn42_1728"

><td id="1728"><a href="#1728">1728</a></td></tr
><tr id="gr_svn42_1729"

><td id="1729"><a href="#1729">1729</a></td></tr
><tr id="gr_svn42_1730"

><td id="1730"><a href="#1730">1730</a></td></tr
><tr id="gr_svn42_1731"

><td id="1731"><a href="#1731">1731</a></td></tr
><tr id="gr_svn42_1732"

><td id="1732"><a href="#1732">1732</a></td></tr
><tr id="gr_svn42_1733"

><td id="1733"><a href="#1733">1733</a></td></tr
><tr id="gr_svn42_1734"

><td id="1734"><a href="#1734">1734</a></td></tr
><tr id="gr_svn42_1735"

><td id="1735"><a href="#1735">1735</a></td></tr
><tr id="gr_svn42_1736"

><td id="1736"><a href="#1736">1736</a></td></tr
><tr id="gr_svn42_1737"

><td id="1737"><a href="#1737">1737</a></td></tr
><tr id="gr_svn42_1738"

><td id="1738"><a href="#1738">1738</a></td></tr
><tr id="gr_svn42_1739"

><td id="1739"><a href="#1739">1739</a></td></tr
><tr id="gr_svn42_1740"

><td id="1740"><a href="#1740">1740</a></td></tr
><tr id="gr_svn42_1741"

><td id="1741"><a href="#1741">1741</a></td></tr
><tr id="gr_svn42_1742"

><td id="1742"><a href="#1742">1742</a></td></tr
><tr id="gr_svn42_1743"

><td id="1743"><a href="#1743">1743</a></td></tr
><tr id="gr_svn42_1744"

><td id="1744"><a href="#1744">1744</a></td></tr
><tr id="gr_svn42_1745"

><td id="1745"><a href="#1745">1745</a></td></tr
><tr id="gr_svn42_1746"

><td id="1746"><a href="#1746">1746</a></td></tr
><tr id="gr_svn42_1747"

><td id="1747"><a href="#1747">1747</a></td></tr
><tr id="gr_svn42_1748"

><td id="1748"><a href="#1748">1748</a></td></tr
><tr id="gr_svn42_1749"

><td id="1749"><a href="#1749">1749</a></td></tr
><tr id="gr_svn42_1750"

><td id="1750"><a href="#1750">1750</a></td></tr
><tr id="gr_svn42_1751"

><td id="1751"><a href="#1751">1751</a></td></tr
><tr id="gr_svn42_1752"

><td id="1752"><a href="#1752">1752</a></td></tr
><tr id="gr_svn42_1753"

><td id="1753"><a href="#1753">1753</a></td></tr
><tr id="gr_svn42_1754"

><td id="1754"><a href="#1754">1754</a></td></tr
><tr id="gr_svn42_1755"

><td id="1755"><a href="#1755">1755</a></td></tr
><tr id="gr_svn42_1756"

><td id="1756"><a href="#1756">1756</a></td></tr
><tr id="gr_svn42_1757"

><td id="1757"><a href="#1757">1757</a></td></tr
><tr id="gr_svn42_1758"

><td id="1758"><a href="#1758">1758</a></td></tr
><tr id="gr_svn42_1759"

><td id="1759"><a href="#1759">1759</a></td></tr
><tr id="gr_svn42_1760"

><td id="1760"><a href="#1760">1760</a></td></tr
><tr id="gr_svn42_1761"

><td id="1761"><a href="#1761">1761</a></td></tr
><tr id="gr_svn42_1762"

><td id="1762"><a href="#1762">1762</a></td></tr
><tr id="gr_svn42_1763"

><td id="1763"><a href="#1763">1763</a></td></tr
><tr id="gr_svn42_1764"

><td id="1764"><a href="#1764">1764</a></td></tr
><tr id="gr_svn42_1765"

><td id="1765"><a href="#1765">1765</a></td></tr
><tr id="gr_svn42_1766"

><td id="1766"><a href="#1766">1766</a></td></tr
><tr id="gr_svn42_1767"

><td id="1767"><a href="#1767">1767</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-c"><table id="src_table_0"><tr
id=sl_svn42_1

><td class="source">/*<br></td></tr
><tr
id=sl_svn42_2

><td class="source"> * Copyright 2008 Google Inc.<br></td></tr
><tr
id=sl_svn42_3

><td class="source"> *<br></td></tr
><tr
id=sl_svn42_4

><td class="source"> * Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);<br></td></tr
><tr
id=sl_svn42_5

><td class="source"> * you may not use this file except in compliance with the License.<br></td></tr
><tr
id=sl_svn42_6

><td class="source"> * You may obtain a copy of the License at<br></td></tr
><tr
id=sl_svn42_7

><td class="source"> *<br></td></tr
><tr
id=sl_svn42_8

><td class="source"> * http://www.apache.org/licenses/LICENSE-2.0<br></td></tr
><tr
id=sl_svn42_9

><td class="source"> *<br></td></tr
><tr
id=sl_svn42_10

><td class="source"> * Unless required by applicable law or agreed to in writing, software<br></td></tr
><tr
id=sl_svn42_11

><td class="source"> * distributed under the License is distributed on an &quot;AS IS&quot; BASIS,<br></td></tr
><tr
id=sl_svn42_12

><td class="source"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.<br></td></tr
><tr
id=sl_svn42_13

><td class="source"> * See the License for the specific language governing permissions and<br></td></tr
><tr
id=sl_svn42_14

><td class="source"> * limitations under the License.<br></td></tr
><tr
id=sl_svn42_15

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_16

><td class="source">#ifdef HAVE_CONFIG_H<br></td></tr
><tr
id=sl_svn42_17

><td class="source">#include &quot;config.h&quot;<br></td></tr
><tr
id=sl_svn42_18

><td class="source">#endif<br></td></tr
><tr
id=sl_svn42_19

><td class="source">#ifdef HAVE_MALLOC_H<br></td></tr
><tr
id=sl_svn42_20

><td class="source">#include &lt;malloc.h&gt;<br></td></tr
><tr
id=sl_svn42_21

><td class="source">#endif<br></td></tr
><tr
id=sl_svn42_22

><td class="source">#include &lt;setjmp.h&gt;<br></td></tr
><tr
id=sl_svn42_23

><td class="source">#ifndef _WIN32<br></td></tr
><tr
id=sl_svn42_24

><td class="source">#include &lt;signal.h&gt;<br></td></tr
><tr
id=sl_svn42_25

><td class="source">#endif // !_WIN32<br></td></tr
><tr
id=sl_svn42_26

><td class="source">#include &lt;stdarg.h&gt;<br></td></tr
><tr
id=sl_svn42_27

><td class="source">#include &lt;stddef.h&gt;<br></td></tr
><tr
id=sl_svn42_28

><td class="source">#include &lt;stdio.h&gt;<br></td></tr
><tr
id=sl_svn42_29

><td class="source">#include &lt;stdlib.h&gt;<br></td></tr
><tr
id=sl_svn42_30

><td class="source">#include &lt;string.h&gt;<br></td></tr
><tr
id=sl_svn42_31

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_32

><td class="source">#include &lt;windows.h&gt;<br></td></tr
><tr
id=sl_svn42_33

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_34

><td class="source">#include &lt;cmockery.h&gt;<br></td></tr
><tr
id=sl_svn42_35

><td class="source"><br></td></tr
><tr
id=sl_svn42_36

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_37

><td class="source">#define vsnprintf _vsnprintf<br></td></tr
><tr
id=sl_svn42_38

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_39

><td class="source"><br></td></tr
><tr
id=sl_svn42_40

><td class="source">/* Backwards compatibility with headers shipped with Visual Studio 2005 and<br></td></tr
><tr
id=sl_svn42_41

><td class="source"> * earlier. */<br></td></tr
><tr
id=sl_svn42_42

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_43

><td class="source">WINBASEAPI BOOL WINAPI IsDebuggerPresent(VOID);<br></td></tr
><tr
id=sl_svn42_44

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_45

><td class="source"><br></td></tr
><tr
id=sl_svn42_46

><td class="source">// Size of guard bytes around dynamically allocated blocks.<br></td></tr
><tr
id=sl_svn42_47

><td class="source">#define MALLOC_GUARD_SIZE 16<br></td></tr
><tr
id=sl_svn42_48

><td class="source">// Pattern used to initialize guard blocks.<br></td></tr
><tr
id=sl_svn42_49

><td class="source">#define MALLOC_GUARD_PATTERN 0xEF<br></td></tr
><tr
id=sl_svn42_50

><td class="source">// Pattern used to initialize memory allocated with test_malloc().<br></td></tr
><tr
id=sl_svn42_51

><td class="source">#define MALLOC_ALLOC_PATTERN 0xBA<br></td></tr
><tr
id=sl_svn42_52

><td class="source">#define MALLOC_FREE_PATTERN 0xCD<br></td></tr
><tr
id=sl_svn42_53

><td class="source">// Alignment of allocated blocks.  NOTE: This must be base2.<br></td></tr
><tr
id=sl_svn42_54

><td class="source">#define MALLOC_ALIGNMENT sizeof(size_t)<br></td></tr
><tr
id=sl_svn42_55

><td class="source"><br></td></tr
><tr
id=sl_svn42_56

><td class="source">// Printf formatting for source code locations.<br></td></tr
><tr
id=sl_svn42_57

><td class="source">#define SOURCE_LOCATION_FORMAT &quot;%s:%d&quot;<br></td></tr
><tr
id=sl_svn42_58

><td class="source"><br></td></tr
><tr
id=sl_svn42_59

><td class="source">// Calculates the number of elements in an array.<br></td></tr
><tr
id=sl_svn42_60

><td class="source">#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))<br></td></tr
><tr
id=sl_svn42_61

><td class="source"><br></td></tr
><tr
id=sl_svn42_62

><td class="source">// Declare and initialize the pointer member of ValuePointer variable name<br></td></tr
><tr
id=sl_svn42_63

><td class="source">// with ptr.<br></td></tr
><tr
id=sl_svn42_64

><td class="source">#define declare_initialize_value_pointer_pointer(name, ptr) \<br></td></tr
><tr
id=sl_svn42_65

><td class="source">    ValuePointer name ; \<br></td></tr
><tr
id=sl_svn42_66

><td class="source">    name.value = 0; \<br></td></tr
><tr
id=sl_svn42_67

><td class="source">    name.pointer = (void*)(ptr)<br></td></tr
><tr
id=sl_svn42_68

><td class="source"><br></td></tr
><tr
id=sl_svn42_69

><td class="source">// Declare and initialize the value member of ValuePointer variable name<br></td></tr
><tr
id=sl_svn42_70

><td class="source">// with val.<br></td></tr
><tr
id=sl_svn42_71

><td class="source">#define declare_initialize_value_pointer_value(name, val) \<br></td></tr
><tr
id=sl_svn42_72

><td class="source">    ValuePointer name ; \<br></td></tr
><tr
id=sl_svn42_73

><td class="source">    name.value = val<br></td></tr
><tr
id=sl_svn42_74

><td class="source"><br></td></tr
><tr
id=sl_svn42_75

><td class="source">// Cast a LargestIntegralType to pointer_type via a ValuePointer.<br></td></tr
><tr
id=sl_svn42_76

><td class="source">#define cast_largest_integral_type_to_pointer( \<br></td></tr
><tr
id=sl_svn42_77

><td class="source">    pointer_type, largest_integral_type) \<br></td></tr
><tr
id=sl_svn42_78

><td class="source">    ((pointer_type)((ValuePointer*)&amp;(largest_integral_type))-&gt;pointer)<br></td></tr
><tr
id=sl_svn42_79

><td class="source"><br></td></tr
><tr
id=sl_svn42_80

><td class="source">// Used to cast LargetIntegralType to void* and vice versa.<br></td></tr
><tr
id=sl_svn42_81

><td class="source">typedef union ValuePointer {<br></td></tr
><tr
id=sl_svn42_82

><td class="source">    LargestIntegralType value;<br></td></tr
><tr
id=sl_svn42_83

><td class="source">    void *pointer;<br></td></tr
><tr
id=sl_svn42_84

><td class="source">} ValuePointer;<br></td></tr
><tr
id=sl_svn42_85

><td class="source"><br></td></tr
><tr
id=sl_svn42_86

><td class="source">// Doubly linked list node.<br></td></tr
><tr
id=sl_svn42_87

><td class="source">typedef struct ListNode {<br></td></tr
><tr
id=sl_svn42_88

><td class="source">    const void *value;<br></td></tr
><tr
id=sl_svn42_89

><td class="source">    int refcount;<br></td></tr
><tr
id=sl_svn42_90

><td class="source">    struct ListNode *next;<br></td></tr
><tr
id=sl_svn42_91

><td class="source">    struct ListNode *prev;<br></td></tr
><tr
id=sl_svn42_92

><td class="source">} ListNode;<br></td></tr
><tr
id=sl_svn42_93

><td class="source"><br></td></tr
><tr
id=sl_svn42_94

><td class="source">// Debug information for malloc().<br></td></tr
><tr
id=sl_svn42_95

><td class="source">typedef struct MallocBlockInfo {<br></td></tr
><tr
id=sl_svn42_96

><td class="source">    void* block;              // Address of the block returned by malloc().<br></td></tr
><tr
id=sl_svn42_97

><td class="source">    size_t allocated_size;    // Total size of the allocated block.<br></td></tr
><tr
id=sl_svn42_98

><td class="source">    size_t size;              // Request block size.<br></td></tr
><tr
id=sl_svn42_99

><td class="source">    SourceLocation location;  // Where the block was allocated.<br></td></tr
><tr
id=sl_svn42_100

><td class="source">    ListNode node;            // Node within list of all allocated blocks.<br></td></tr
><tr
id=sl_svn42_101

><td class="source">} MallocBlockInfo;<br></td></tr
><tr
id=sl_svn42_102

><td class="source"><br></td></tr
><tr
id=sl_svn42_103

><td class="source">// State of each test.<br></td></tr
><tr
id=sl_svn42_104

><td class="source">typedef struct TestState {<br></td></tr
><tr
id=sl_svn42_105

><td class="source">    const ListNode *check_point; // Check point of the test if there&#39;s a<br></td></tr
><tr
id=sl_svn42_106

><td class="source">                                 // setup function.<br></td></tr
><tr
id=sl_svn42_107

><td class="source">    void *state;                 // State associated with the test.<br></td></tr
><tr
id=sl_svn42_108

><td class="source">} TestState;<br></td></tr
><tr
id=sl_svn42_109

><td class="source"><br></td></tr
><tr
id=sl_svn42_110

><td class="source">// Determines whether two values are the same.<br></td></tr
><tr
id=sl_svn42_111

><td class="source">typedef int (*EqualityFunction)(const void *left, const void *right);<br></td></tr
><tr
id=sl_svn42_112

><td class="source"><br></td></tr
><tr
id=sl_svn42_113

><td class="source">// Value of a symbol and the place it was declared.<br></td></tr
><tr
id=sl_svn42_114

><td class="source">typedef struct SymbolValue {<br></td></tr
><tr
id=sl_svn42_115

><td class="source">    SourceLocation location;<br></td></tr
><tr
id=sl_svn42_116

><td class="source">    LargestIntegralType value;<br></td></tr
><tr
id=sl_svn42_117

><td class="source">} SymbolValue;<br></td></tr
><tr
id=sl_svn42_118

><td class="source"><br></td></tr
><tr
id=sl_svn42_119

><td class="source">/* Contains a list of values for a symbol.<br></td></tr
><tr
id=sl_svn42_120

><td class="source"> * NOTE: Each structure referenced by symbol_values_list_head must have a<br></td></tr
><tr
id=sl_svn42_121

><td class="source"> * SourceLocation as its&#39; first member.<br></td></tr
><tr
id=sl_svn42_122

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_123

><td class="source">typedef struct SymbolMapValue {<br></td></tr
><tr
id=sl_svn42_124

><td class="source">    const char *symbol_name;<br></td></tr
><tr
id=sl_svn42_125

><td class="source">    ListNode symbol_values_list_head;<br></td></tr
><tr
id=sl_svn42_126

><td class="source">} SymbolMapValue;<br></td></tr
><tr
id=sl_svn42_127

><td class="source"><br></td></tr
><tr
id=sl_svn42_128

><td class="source">// Used by list_free() to deallocate values referenced by list nodes.<br></td></tr
><tr
id=sl_svn42_129

><td class="source">typedef void (*CleanupListValue)(const void *value, void *cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_130

><td class="source"><br></td></tr
><tr
id=sl_svn42_131

><td class="source">// Structure used to check the range of integer types.<br></td></tr
><tr
id=sl_svn42_132

><td class="source">typedef struct CheckIntegerRange {<br></td></tr
><tr
id=sl_svn42_133

><td class="source">    CheckParameterEvent event;<br></td></tr
><tr
id=sl_svn42_134

><td class="source">    LargestIntegralType minimum;<br></td></tr
><tr
id=sl_svn42_135

><td class="source">    LargestIntegralType maximum;<br></td></tr
><tr
id=sl_svn42_136

><td class="source">} CheckIntegerRange;<br></td></tr
><tr
id=sl_svn42_137

><td class="source"><br></td></tr
><tr
id=sl_svn42_138

><td class="source">// Structure used to check whether an integer value is in a set.<br></td></tr
><tr
id=sl_svn42_139

><td class="source">typedef struct CheckIntegerSet {<br></td></tr
><tr
id=sl_svn42_140

><td class="source">    CheckParameterEvent event;<br></td></tr
><tr
id=sl_svn42_141

><td class="source">    const LargestIntegralType *set;<br></td></tr
><tr
id=sl_svn42_142

><td class="source">    size_t size_of_set;<br></td></tr
><tr
id=sl_svn42_143

><td class="source">} CheckIntegerSet;<br></td></tr
><tr
id=sl_svn42_144

><td class="source"><br></td></tr
><tr
id=sl_svn42_145

><td class="source">/* Used to check whether a parameter matches the area of memory referenced by<br></td></tr
><tr
id=sl_svn42_146

><td class="source"> * this structure.  */<br></td></tr
><tr
id=sl_svn42_147

><td class="source">typedef struct CheckMemoryData {<br></td></tr
><tr
id=sl_svn42_148

><td class="source">    CheckParameterEvent event;<br></td></tr
><tr
id=sl_svn42_149

><td class="source">    const void *memory;<br></td></tr
><tr
id=sl_svn42_150

><td class="source">    size_t size;<br></td></tr
><tr
id=sl_svn42_151

><td class="source">} CheckMemoryData;<br></td></tr
><tr
id=sl_svn42_152

><td class="source"><br></td></tr
><tr
id=sl_svn42_153

><td class="source">static ListNode* list_initialize(ListNode * const node);<br></td></tr
><tr
id=sl_svn42_154

><td class="source">static ListNode* list_add(ListNode * const head, ListNode *new_node);<br></td></tr
><tr
id=sl_svn42_155

><td class="source">static ListNode* list_add_value(ListNode * const head, const void *value,<br></td></tr
><tr
id=sl_svn42_156

><td class="source">                                     const int count);<br></td></tr
><tr
id=sl_svn42_157

><td class="source">static ListNode* list_remove(<br></td></tr
><tr
id=sl_svn42_158

><td class="source">    ListNode * const node, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_159

><td class="source">    void * const cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_160

><td class="source">static void list_remove_free(<br></td></tr
><tr
id=sl_svn42_161

><td class="source">    ListNode * const node, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_162

><td class="source">    void * const cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_163

><td class="source">static int list_empty(const ListNode * const head);<br></td></tr
><tr
id=sl_svn42_164

><td class="source">static int list_find(<br></td></tr
><tr
id=sl_svn42_165

><td class="source">    ListNode * const head, const void *value,<br></td></tr
><tr
id=sl_svn42_166

><td class="source">    const EqualityFunction equal_func, ListNode **output);<br></td></tr
><tr
id=sl_svn42_167

><td class="source">static int list_first(ListNode * const head, ListNode **output);<br></td></tr
><tr
id=sl_svn42_168

><td class="source">static ListNode* list_free(<br></td></tr
><tr
id=sl_svn42_169

><td class="source">    ListNode * const head, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_170

><td class="source">    void * const cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_171

><td class="source"><br></td></tr
><tr
id=sl_svn42_172

><td class="source">static void add_symbol_value(<br></td></tr
><tr
id=sl_svn42_173

><td class="source">    ListNode * const symbol_map_head, const char * const symbol_names[],<br></td></tr
><tr
id=sl_svn42_174

><td class="source">    const size_t number_of_symbol_names, const void* value, const int count);<br></td></tr
><tr
id=sl_svn42_175

><td class="source">static int get_symbol_value(<br></td></tr
><tr
id=sl_svn42_176

><td class="source">    ListNode * const symbol_map_head, const char * const symbol_names[],<br></td></tr
><tr
id=sl_svn42_177

><td class="source">    const size_t number_of_symbol_names, void **output);<br></td></tr
><tr
id=sl_svn42_178

><td class="source">static void free_value(const void *value, void *cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_179

><td class="source">static void free_symbol_map_value(<br></td></tr
><tr
id=sl_svn42_180

><td class="source">    const void *value, void *cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_181

><td class="source">static void remove_always_return_values(ListNode * const map_head,<br></td></tr
><tr
id=sl_svn42_182

><td class="source">                                        const size_t number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_183

><td class="source">static int check_for_leftover_values(<br></td></tr
><tr
id=sl_svn42_184

><td class="source">    const ListNode * const map_head, const char * const error_message,<br></td></tr
><tr
id=sl_svn42_185

><td class="source">    const size_t number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_186

><td class="source">// This must be called at the beginning of a test to initialize some data<br></td></tr
><tr
id=sl_svn42_187

><td class="source">// structures.<br></td></tr
><tr
id=sl_svn42_188

><td class="source">static void initialize_testing(const char *test_name);<br></td></tr
><tr
id=sl_svn42_189

><td class="source">// This must be called at the end of a test to free() allocated structures.<br></td></tr
><tr
id=sl_svn42_190

><td class="source">static void teardown_testing(const char *test_name);<br></td></tr
><tr
id=sl_svn42_191

><td class="source"><br></td></tr
><tr
id=sl_svn42_192

><td class="source"><br></td></tr
><tr
id=sl_svn42_193

><td class="source">// Keeps track of the calling context returned by setenv() so that the fail()<br></td></tr
><tr
id=sl_svn42_194

><td class="source">// method can jump out of a test.<br></td></tr
><tr
id=sl_svn42_195

><td class="source">static jmp_buf global_run_test_env;<br></td></tr
><tr
id=sl_svn42_196

><td class="source">static int global_running_test = 0;<br></td></tr
><tr
id=sl_svn42_197

><td class="source"><br></td></tr
><tr
id=sl_svn42_198

><td class="source">// Keeps track of the calling context returned by setenv() so that<br></td></tr
><tr
id=sl_svn42_199

><td class="source">// mock_assert() can optionally jump back to expect_assert_failure().<br></td></tr
><tr
id=sl_svn42_200

><td class="source">jmp_buf global_expect_assert_env;<br></td></tr
><tr
id=sl_svn42_201

><td class="source">int global_expecting_assert = 0;<br></td></tr
><tr
id=sl_svn42_202

><td class="source"><br></td></tr
><tr
id=sl_svn42_203

><td class="source">// Keeps a map of the values that functions will have to return to provide<br></td></tr
><tr
id=sl_svn42_204

><td class="source">// mocked interfaces.<br></td></tr
><tr
id=sl_svn42_205

><td class="source">static ListNode global_function_result_map_head;<br></td></tr
><tr
id=sl_svn42_206

><td class="source">// Location of the last mock value returned was declared.<br></td></tr
><tr
id=sl_svn42_207

><td class="source">static SourceLocation global_last_mock_value_location;<br></td></tr
><tr
id=sl_svn42_208

><td class="source"><br></td></tr
><tr
id=sl_svn42_209

><td class="source">/* Keeps a map of the values that functions expect as parameters to their<br></td></tr
><tr
id=sl_svn42_210

><td class="source"> * mocked interfaces. */<br></td></tr
><tr
id=sl_svn42_211

><td class="source">static ListNode global_function_parameter_map_head;<br></td></tr
><tr
id=sl_svn42_212

><td class="source">// Location of last parameter value checked was declared.<br></td></tr
><tr
id=sl_svn42_213

><td class="source">static SourceLocation global_last_parameter_location;<br></td></tr
><tr
id=sl_svn42_214

><td class="source"><br></td></tr
><tr
id=sl_svn42_215

><td class="source">// List of all currently allocated blocks.<br></td></tr
><tr
id=sl_svn42_216

><td class="source">static ListNode global_allocated_blocks;<br></td></tr
><tr
id=sl_svn42_217

><td class="source"><br></td></tr
><tr
id=sl_svn42_218

><td class="source">#ifndef _WIN32<br></td></tr
><tr
id=sl_svn42_219

><td class="source">// Signals caught by exception_handler().<br></td></tr
><tr
id=sl_svn42_220

><td class="source">static const int exception_signals[] = {<br></td></tr
><tr
id=sl_svn42_221

><td class="source">    SIGFPE,<br></td></tr
><tr
id=sl_svn42_222

><td class="source">    SIGILL,<br></td></tr
><tr
id=sl_svn42_223

><td class="source">    SIGSEGV,<br></td></tr
><tr
id=sl_svn42_224

><td class="source">    SIGBUS,<br></td></tr
><tr
id=sl_svn42_225

><td class="source">    SIGSYS,<br></td></tr
><tr
id=sl_svn42_226

><td class="source">};<br></td></tr
><tr
id=sl_svn42_227

><td class="source"><br></td></tr
><tr
id=sl_svn42_228

><td class="source">// Default signal functions that should be restored after a test is complete.<br></td></tr
><tr
id=sl_svn42_229

><td class="source">typedef void (*SignalFunction)(int signal);<br></td></tr
><tr
id=sl_svn42_230

><td class="source">static SignalFunction default_signal_functions[<br></td></tr
><tr
id=sl_svn42_231

><td class="source">    ARRAY_LENGTH(exception_signals)];<br></td></tr
><tr
id=sl_svn42_232

><td class="source"><br></td></tr
><tr
id=sl_svn42_233

><td class="source">#else // _WIN32<br></td></tr
><tr
id=sl_svn42_234

><td class="source"><br></td></tr
><tr
id=sl_svn42_235

><td class="source">// The default exception filter.<br></td></tr
><tr
id=sl_svn42_236

><td class="source">static LPTOP_LEVEL_EXCEPTION_FILTER previous_exception_filter;<br></td></tr
><tr
id=sl_svn42_237

><td class="source"><br></td></tr
><tr
id=sl_svn42_238

><td class="source">// Fatal exceptions.<br></td></tr
><tr
id=sl_svn42_239

><td class="source">typedef struct ExceptionCodeInfo {<br></td></tr
><tr
id=sl_svn42_240

><td class="source">    DWORD code;<br></td></tr
><tr
id=sl_svn42_241

><td class="source">    const char* description;<br></td></tr
><tr
id=sl_svn42_242

><td class="source">} ExceptionCodeInfo;<br></td></tr
><tr
id=sl_svn42_243

><td class="source"><br></td></tr
><tr
id=sl_svn42_244

><td class="source">#define EXCEPTION_CODE_INFO(exception_code) {exception_code, #exception_code}<br></td></tr
><tr
id=sl_svn42_245

><td class="source"><br></td></tr
><tr
id=sl_svn42_246

><td class="source">static const ExceptionCodeInfo exception_codes[] = {<br></td></tr
><tr
id=sl_svn42_247

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_ACCESS_VIOLATION),<br></td></tr
><tr
id=sl_svn42_248

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_ARRAY_BOUNDS_EXCEEDED),<br></td></tr
><tr
id=sl_svn42_249

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_DATATYPE_MISALIGNMENT),<br></td></tr
><tr
id=sl_svn42_250

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_DENORMAL_OPERAND),<br></td></tr
><tr
id=sl_svn42_251

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_DIVIDE_BY_ZERO),<br></td></tr
><tr
id=sl_svn42_252

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_INEXACT_RESULT),<br></td></tr
><tr
id=sl_svn42_253

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_INVALID_OPERATION),<br></td></tr
><tr
id=sl_svn42_254

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_OVERFLOW),<br></td></tr
><tr
id=sl_svn42_255

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_STACK_CHECK),<br></td></tr
><tr
id=sl_svn42_256

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_FLT_UNDERFLOW),<br></td></tr
><tr
id=sl_svn42_257

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_GUARD_PAGE),<br></td></tr
><tr
id=sl_svn42_258

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_ILLEGAL_INSTRUCTION),<br></td></tr
><tr
id=sl_svn42_259

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_INT_DIVIDE_BY_ZERO),<br></td></tr
><tr
id=sl_svn42_260

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_INT_OVERFLOW),<br></td></tr
><tr
id=sl_svn42_261

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_INVALID_DISPOSITION),<br></td></tr
><tr
id=sl_svn42_262

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_INVALID_HANDLE),<br></td></tr
><tr
id=sl_svn42_263

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_IN_PAGE_ERROR),<br></td></tr
><tr
id=sl_svn42_264

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_NONCONTINUABLE_EXCEPTION),<br></td></tr
><tr
id=sl_svn42_265

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_PRIV_INSTRUCTION),<br></td></tr
><tr
id=sl_svn42_266

><td class="source">    EXCEPTION_CODE_INFO(EXCEPTION_STACK_OVERFLOW),<br></td></tr
><tr
id=sl_svn42_267

><td class="source">};<br></td></tr
><tr
id=sl_svn42_268

><td class="source">#endif // !_WIN32<br></td></tr
><tr
id=sl_svn42_269

><td class="source"><br></td></tr
><tr
id=sl_svn42_270

><td class="source"><br></td></tr
><tr
id=sl_svn42_271

><td class="source">// Exit the currently executing test.<br></td></tr
><tr
id=sl_svn42_272

><td class="source">static void exit_test(const int quit_application) {<br></td></tr
><tr
id=sl_svn42_273

><td class="source">    if (global_running_test) {<br></td></tr
><tr
id=sl_svn42_274

><td class="source">        longjmp(global_run_test_env, 1);<br></td></tr
><tr
id=sl_svn42_275

><td class="source">    } else if (quit_application) {<br></td></tr
><tr
id=sl_svn42_276

><td class="source">        exit(-1);<br></td></tr
><tr
id=sl_svn42_277

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_278

><td class="source">}<br></td></tr
><tr
id=sl_svn42_279

><td class="source"><br></td></tr
><tr
id=sl_svn42_280

><td class="source"><br></td></tr
><tr
id=sl_svn42_281

><td class="source">// Initialize a SourceLocation structure.<br></td></tr
><tr
id=sl_svn42_282

><td class="source">static void initialize_source_location(SourceLocation * const location) {<br></td></tr
><tr
id=sl_svn42_283

><td class="source">    assert_true(location);<br></td></tr
><tr
id=sl_svn42_284

><td class="source">    location-&gt;file = NULL;<br></td></tr
><tr
id=sl_svn42_285

><td class="source">    location-&gt;line = 0;<br></td></tr
><tr
id=sl_svn42_286

><td class="source">}<br></td></tr
><tr
id=sl_svn42_287

><td class="source"><br></td></tr
><tr
id=sl_svn42_288

><td class="source"><br></td></tr
><tr
id=sl_svn42_289

><td class="source">// Determine whether a source location is currently set.<br></td></tr
><tr
id=sl_svn42_290

><td class="source">static int source_location_is_set(const SourceLocation * const location) {<br></td></tr
><tr
id=sl_svn42_291

><td class="source">    assert_true(location);<br></td></tr
><tr
id=sl_svn42_292

><td class="source">    return location-&gt;file &amp;&amp; location-&gt;line;<br></td></tr
><tr
id=sl_svn42_293

><td class="source">}<br></td></tr
><tr
id=sl_svn42_294

><td class="source"><br></td></tr
><tr
id=sl_svn42_295

><td class="source"><br></td></tr
><tr
id=sl_svn42_296

><td class="source">// Set a source location.<br></td></tr
><tr
id=sl_svn42_297

><td class="source">static void set_source_location(<br></td></tr
><tr
id=sl_svn42_298

><td class="source">    SourceLocation * const location, const char * const file,<br></td></tr
><tr
id=sl_svn42_299

><td class="source">    const int line) {<br></td></tr
><tr
id=sl_svn42_300

><td class="source">    assert_true(location);<br></td></tr
><tr
id=sl_svn42_301

><td class="source">    location-&gt;file = file;<br></td></tr
><tr
id=sl_svn42_302

><td class="source">    location-&gt;line = line;<br></td></tr
><tr
id=sl_svn42_303

><td class="source">}<br></td></tr
><tr
id=sl_svn42_304

><td class="source"><br></td></tr
><tr
id=sl_svn42_305

><td class="source"><br></td></tr
><tr
id=sl_svn42_306

><td class="source">// Create function results and expected parameter lists.<br></td></tr
><tr
id=sl_svn42_307

><td class="source">void initialize_testing(const char *test_name) {<br></td></tr
><tr
id=sl_svn42_308

><td class="source">    list_initialize(&amp;global_function_result_map_head);<br></td></tr
><tr
id=sl_svn42_309

><td class="source">    initialize_source_location(&amp;global_last_mock_value_location);<br></td></tr
><tr
id=sl_svn42_310

><td class="source">    list_initialize(&amp;global_function_parameter_map_head);<br></td></tr
><tr
id=sl_svn42_311

><td class="source">    initialize_source_location(&amp;global_last_parameter_location);<br></td></tr
><tr
id=sl_svn42_312

><td class="source">}<br></td></tr
><tr
id=sl_svn42_313

><td class="source"><br></td></tr
><tr
id=sl_svn42_314

><td class="source"><br></td></tr
><tr
id=sl_svn42_315

><td class="source">void fail_if_leftover_values(const char *test_name) {<br></td></tr
><tr
id=sl_svn42_316

><td class="source">    int error_occurred = 0;<br></td></tr
><tr
id=sl_svn42_317

><td class="source">    remove_always_return_values(&amp;global_function_result_map_head, 1);<br></td></tr
><tr
id=sl_svn42_318

><td class="source">    if (check_for_leftover_values(<br></td></tr
><tr
id=sl_svn42_319

><td class="source">            &amp;global_function_result_map_head,<br></td></tr
><tr
id=sl_svn42_320

><td class="source">            &quot;%s() has remaining non-returned values.\n&quot;, 1)) {<br></td></tr
><tr
id=sl_svn42_321

><td class="source">        error_occurred = 1;<br></td></tr
><tr
id=sl_svn42_322

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_323

><td class="source"><br></td></tr
><tr
id=sl_svn42_324

><td class="source">    remove_always_return_values(&amp;global_function_parameter_map_head, 2);<br></td></tr
><tr
id=sl_svn42_325

><td class="source">    if (check_for_leftover_values(<br></td></tr
><tr
id=sl_svn42_326

><td class="source">            &amp;global_function_parameter_map_head,<br></td></tr
><tr
id=sl_svn42_327

><td class="source">            &quot;%s parameter still has values that haven&#39;t been checked.\n&quot;, 2)) {<br></td></tr
><tr
id=sl_svn42_328

><td class="source">        error_occurred = 1;<br></td></tr
><tr
id=sl_svn42_329

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_330

><td class="source">    if (error_occurred) {<br></td></tr
><tr
id=sl_svn42_331

><td class="source">        exit_test(1);<br></td></tr
><tr
id=sl_svn42_332

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_333

><td class="source">}<br></td></tr
><tr
id=sl_svn42_334

><td class="source"><br></td></tr
><tr
id=sl_svn42_335

><td class="source"><br></td></tr
><tr
id=sl_svn42_336

><td class="source">void teardown_testing(const char *test_name) {<br></td></tr
><tr
id=sl_svn42_337

><td class="source">    list_free(&amp;global_function_result_map_head, free_symbol_map_value,<br></td></tr
><tr
id=sl_svn42_338

><td class="source">              (void*)0);<br></td></tr
><tr
id=sl_svn42_339

><td class="source">    initialize_source_location(&amp;global_last_mock_value_location);<br></td></tr
><tr
id=sl_svn42_340

><td class="source">    list_free(&amp;global_function_parameter_map_head, free_symbol_map_value,<br></td></tr
><tr
id=sl_svn42_341

><td class="source">              (void*)1);<br></td></tr
><tr
id=sl_svn42_342

><td class="source">    initialize_source_location(&amp;global_last_parameter_location);<br></td></tr
><tr
id=sl_svn42_343

><td class="source">}<br></td></tr
><tr
id=sl_svn42_344

><td class="source"><br></td></tr
><tr
id=sl_svn42_345

><td class="source">// Initialize a list node.<br></td></tr
><tr
id=sl_svn42_346

><td class="source">static ListNode* list_initialize(ListNode * const node) {<br></td></tr
><tr
id=sl_svn42_347

><td class="source">    node-&gt;value = NULL;<br></td></tr
><tr
id=sl_svn42_348

><td class="source">    node-&gt;next = node;<br></td></tr
><tr
id=sl_svn42_349

><td class="source">    node-&gt;prev = node;<br></td></tr
><tr
id=sl_svn42_350

><td class="source">    node-&gt;refcount = 1;<br></td></tr
><tr
id=sl_svn42_351

><td class="source">    return node;<br></td></tr
><tr
id=sl_svn42_352

><td class="source">}<br></td></tr
><tr
id=sl_svn42_353

><td class="source"><br></td></tr
><tr
id=sl_svn42_354

><td class="source"><br></td></tr
><tr
id=sl_svn42_355

><td class="source">/* Adds a value at the tail of a given list.<br></td></tr
><tr
id=sl_svn42_356

><td class="source"> * The node referencing the value is allocated from the heap. */<br></td></tr
><tr
id=sl_svn42_357

><td class="source">static ListNode* list_add_value(ListNode * const head, const void *value,<br></td></tr
><tr
id=sl_svn42_358

><td class="source">                                     const int refcount) {<br></td></tr
><tr
id=sl_svn42_359

><td class="source">    ListNode * const new_node = (ListNode*)malloc(sizeof(ListNode));<br></td></tr
><tr
id=sl_svn42_360

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_361

><td class="source">    assert_true(value);<br></td></tr
><tr
id=sl_svn42_362

><td class="source">    new_node-&gt;value = value;<br></td></tr
><tr
id=sl_svn42_363

><td class="source">    new_node-&gt;refcount = refcount;<br></td></tr
><tr
id=sl_svn42_364

><td class="source">    return list_add(head, new_node);<br></td></tr
><tr
id=sl_svn42_365

><td class="source">}<br></td></tr
><tr
id=sl_svn42_366

><td class="source"><br></td></tr
><tr
id=sl_svn42_367

><td class="source"><br></td></tr
><tr
id=sl_svn42_368

><td class="source">// Add new_node to the end of the list.<br></td></tr
><tr
id=sl_svn42_369

><td class="source">static ListNode* list_add(ListNode * const head, ListNode *new_node) {<br></td></tr
><tr
id=sl_svn42_370

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_371

><td class="source">    assert_true(new_node);<br></td></tr
><tr
id=sl_svn42_372

><td class="source">    new_node-&gt;next = head;<br></td></tr
><tr
id=sl_svn42_373

><td class="source">    new_node-&gt;prev = head-&gt;prev;<br></td></tr
><tr
id=sl_svn42_374

><td class="source">    head-&gt;prev-&gt;next = new_node;<br></td></tr
><tr
id=sl_svn42_375

><td class="source">    head-&gt;prev = new_node;<br></td></tr
><tr
id=sl_svn42_376

><td class="source">    return new_node;<br></td></tr
><tr
id=sl_svn42_377

><td class="source">}<br></td></tr
><tr
id=sl_svn42_378

><td class="source"><br></td></tr
><tr
id=sl_svn42_379

><td class="source"><br></td></tr
><tr
id=sl_svn42_380

><td class="source">// Remove a node from a list.<br></td></tr
><tr
id=sl_svn42_381

><td class="source">static ListNode* list_remove(<br></td></tr
><tr
id=sl_svn42_382

><td class="source">        ListNode * const node, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_383

><td class="source">        void * const cleanup_value_data) {<br></td></tr
><tr
id=sl_svn42_384

><td class="source">    assert_true(node);<br></td></tr
><tr
id=sl_svn42_385

><td class="source">    node-&gt;prev-&gt;next = node-&gt;next;<br></td></tr
><tr
id=sl_svn42_386

><td class="source">    node-&gt;next-&gt;prev = node-&gt;prev;<br></td></tr
><tr
id=sl_svn42_387

><td class="source">    if (cleanup_value) {<br></td></tr
><tr
id=sl_svn42_388

><td class="source">        cleanup_value(node-&gt;value, cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_389

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_390

><td class="source">    return node;<br></td></tr
><tr
id=sl_svn42_391

><td class="source">}<br></td></tr
><tr
id=sl_svn42_392

><td class="source"><br></td></tr
><tr
id=sl_svn42_393

><td class="source"><br></td></tr
><tr
id=sl_svn42_394

><td class="source">/* Remove a list node from a list and free the node. */<br></td></tr
><tr
id=sl_svn42_395

><td class="source">static void list_remove_free(<br></td></tr
><tr
id=sl_svn42_396

><td class="source">        ListNode * const node, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_397

><td class="source">        void * const cleanup_value_data) {<br></td></tr
><tr
id=sl_svn42_398

><td class="source">    assert_true(node);<br></td></tr
><tr
id=sl_svn42_399

><td class="source">    free(list_remove(node, cleanup_value, cleanup_value_data));<br></td></tr
><tr
id=sl_svn42_400

><td class="source">}<br></td></tr
><tr
id=sl_svn42_401

><td class="source"><br></td></tr
><tr
id=sl_svn42_402

><td class="source"><br></td></tr
><tr
id=sl_svn42_403

><td class="source">/* Frees memory kept by a linked list<br></td></tr
><tr
id=sl_svn42_404

><td class="source"> * The cleanup_value function is called for every &quot;value&quot; field of nodes in the<br></td></tr
><tr
id=sl_svn42_405

><td class="source"> * list, except for the head.  In addition to each list value,<br></td></tr
><tr
id=sl_svn42_406

><td class="source"> * cleanup_value_data is passed to each call to cleanup_value.  The head<br></td></tr
><tr
id=sl_svn42_407

><td class="source"> * of the list is not deallocated.<br></td></tr
><tr
id=sl_svn42_408

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_409

><td class="source">static ListNode* list_free(<br></td></tr
><tr
id=sl_svn42_410

><td class="source">        ListNode * const head, const CleanupListValue cleanup_value,<br></td></tr
><tr
id=sl_svn42_411

><td class="source">        void * const cleanup_value_data) {<br></td></tr
><tr
id=sl_svn42_412

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_413

><td class="source">    while (!list_empty(head)) {<br></td></tr
><tr
id=sl_svn42_414

><td class="source">        list_remove_free(head-&gt;next, cleanup_value, cleanup_value_data);<br></td></tr
><tr
id=sl_svn42_415

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_416

><td class="source">    return head;<br></td></tr
><tr
id=sl_svn42_417

><td class="source">}<br></td></tr
><tr
id=sl_svn42_418

><td class="source"><br></td></tr
><tr
id=sl_svn42_419

><td class="source"><br></td></tr
><tr
id=sl_svn42_420

><td class="source">// Determine whether a list is empty.<br></td></tr
><tr
id=sl_svn42_421

><td class="source">static int list_empty(const ListNode * const head) {<br></td></tr
><tr
id=sl_svn42_422

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_423

><td class="source">    return head-&gt;next == head;<br></td></tr
><tr
id=sl_svn42_424

><td class="source">}<br></td></tr
><tr
id=sl_svn42_425

><td class="source"><br></td></tr
><tr
id=sl_svn42_426

><td class="source"><br></td></tr
><tr
id=sl_svn42_427

><td class="source">/* Find a value in the list using the equal_func to compare each node with the<br></td></tr
><tr
id=sl_svn42_428

><td class="source"> * value.<br></td></tr
><tr
id=sl_svn42_429

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_430

><td class="source">static int list_find(ListNode * const head, const void *value,<br></td></tr
><tr
id=sl_svn42_431

><td class="source">                     const EqualityFunction equal_func, ListNode **output) {<br></td></tr
><tr
id=sl_svn42_432

><td class="source">    ListNode *current;<br></td></tr
><tr
id=sl_svn42_433

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_434

><td class="source">    for (current = head-&gt;next; current != head; current = current-&gt;next) {<br></td></tr
><tr
id=sl_svn42_435

><td class="source">        if (equal_func(current-&gt;value, value)) {<br></td></tr
><tr
id=sl_svn42_436

><td class="source">            *output = current;<br></td></tr
><tr
id=sl_svn42_437

><td class="source">            return 1;<br></td></tr
><tr
id=sl_svn42_438

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_439

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_440

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_441

><td class="source">}<br></td></tr
><tr
id=sl_svn42_442

><td class="source"><br></td></tr
><tr
id=sl_svn42_443

><td class="source">// Returns the first node of a list<br></td></tr
><tr
id=sl_svn42_444

><td class="source">static int list_first(ListNode * const head, ListNode **output) {<br></td></tr
><tr
id=sl_svn42_445

><td class="source">    ListNode *target_node;<br></td></tr
><tr
id=sl_svn42_446

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_447

><td class="source">    if (list_empty(head)) {<br></td></tr
><tr
id=sl_svn42_448

><td class="source">        return 0;<br></td></tr
><tr
id=sl_svn42_449

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_450

><td class="source">    target_node = head-&gt;next;<br></td></tr
><tr
id=sl_svn42_451

><td class="source">    *output = target_node;<br></td></tr
><tr
id=sl_svn42_452

><td class="source">    return 1;<br></td></tr
><tr
id=sl_svn42_453

><td class="source">}<br></td></tr
><tr
id=sl_svn42_454

><td class="source"><br></td></tr
><tr
id=sl_svn42_455

><td class="source"><br></td></tr
><tr
id=sl_svn42_456

><td class="source">// Deallocate a value referenced by a list.<br></td></tr
><tr
id=sl_svn42_457

><td class="source">static void free_value(const void *value, void *cleanup_value_data) {<br></td></tr
><tr
id=sl_svn42_458

><td class="source">    assert_true(value);<br></td></tr
><tr
id=sl_svn42_459

><td class="source">    free((void*)value);<br></td></tr
><tr
id=sl_svn42_460

><td class="source">}<br></td></tr
><tr
id=sl_svn42_461

><td class="source"><br></td></tr
><tr
id=sl_svn42_462

><td class="source"><br></td></tr
><tr
id=sl_svn42_463

><td class="source">// Releases memory associated to a symbol_map_value.<br></td></tr
><tr
id=sl_svn42_464

><td class="source">static void free_symbol_map_value(const void *value,<br></td></tr
><tr
id=sl_svn42_465

><td class="source">                                  void *cleanup_value_data) {<br></td></tr
><tr
id=sl_svn42_466

><td class="source">    SymbolMapValue * const map_value = (SymbolMapValue*)value;<br></td></tr
><tr
id=sl_svn42_467

><td class="source">    const unsigned int children = (unsigned int)cleanup_value_data;<br></td></tr
><tr
id=sl_svn42_468

><td class="source">    assert_true(value);<br></td></tr
><tr
id=sl_svn42_469

><td class="source">    list_free(&amp;map_value-&gt;symbol_values_list_head,<br></td></tr
><tr
id=sl_svn42_470

><td class="source">              children ? free_symbol_map_value : free_value,<br></td></tr
><tr
id=sl_svn42_471

><td class="source">              (void*)(children - 1));<br></td></tr
><tr
id=sl_svn42_472

><td class="source">    free(map_value);<br></td></tr
><tr
id=sl_svn42_473

><td class="source">}<br></td></tr
><tr
id=sl_svn42_474

><td class="source"><br></td></tr
><tr
id=sl_svn42_475

><td class="source"><br></td></tr
><tr
id=sl_svn42_476

><td class="source">/* Determine whether a symbol name referenced by a symbol_map_value<br></td></tr
><tr
id=sl_svn42_477

><td class="source"> * matches the specified function name. */<br></td></tr
><tr
id=sl_svn42_478

><td class="source">static int symbol_names_match(const void *map_value, const void *symbol) {<br></td></tr
><tr
id=sl_svn42_479

><td class="source">    return !strcmp(((SymbolMapValue*)map_value)-&gt;symbol_name,<br></td></tr
><tr
id=sl_svn42_480

><td class="source">                   (const char*)symbol);<br></td></tr
><tr
id=sl_svn42_481

><td class="source">}<br></td></tr
><tr
id=sl_svn42_482

><td class="source"><br></td></tr
><tr
id=sl_svn42_483

><td class="source"><br></td></tr
><tr
id=sl_svn42_484

><td class="source">/* Adds a value to the queue of values associated with the given<br></td></tr
><tr
id=sl_svn42_485

><td class="source"> * hierarchy of symbols.  It&#39;s assumed value is allocated from the heap.<br></td></tr
><tr
id=sl_svn42_486

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_487

><td class="source">static void add_symbol_value(ListNode * const symbol_map_head,<br></td></tr
><tr
id=sl_svn42_488

><td class="source">                             const char * const symbol_names[],<br></td></tr
><tr
id=sl_svn42_489

><td class="source">                             const size_t number_of_symbol_names,<br></td></tr
><tr
id=sl_svn42_490

><td class="source">                             const void* value, const int refcount) {<br></td></tr
><tr
id=sl_svn42_491

><td class="source">    const char* symbol_name;<br></td></tr
><tr
id=sl_svn42_492

><td class="source">    ListNode *target_node;<br></td></tr
><tr
id=sl_svn42_493

><td class="source">    SymbolMapValue *target_map_value;<br></td></tr
><tr
id=sl_svn42_494

><td class="source">    assert_true(symbol_map_head);<br></td></tr
><tr
id=sl_svn42_495

><td class="source">    assert_true(symbol_names);<br></td></tr
><tr
id=sl_svn42_496

><td class="source">    assert_true(number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_497

><td class="source">    symbol_name = symbol_names[0];<br></td></tr
><tr
id=sl_svn42_498

><td class="source"><br></td></tr
><tr
id=sl_svn42_499

><td class="source">    if (!list_find(symbol_map_head, symbol_name, symbol_names_match,<br></td></tr
><tr
id=sl_svn42_500

><td class="source">                   &amp;target_node)) {<br></td></tr
><tr
id=sl_svn42_501

><td class="source">        SymbolMapValue * const new_symbol_map_value =<br></td></tr
><tr
id=sl_svn42_502

><td class="source">            malloc(sizeof(*new_symbol_map_value));<br></td></tr
><tr
id=sl_svn42_503

><td class="source">        new_symbol_map_value-&gt;symbol_name = symbol_name;<br></td></tr
><tr
id=sl_svn42_504

><td class="source">        list_initialize(&amp;new_symbol_map_value-&gt;symbol_values_list_head);<br></td></tr
><tr
id=sl_svn42_505

><td class="source">        target_node = list_add_value(symbol_map_head, new_symbol_map_value,<br></td></tr
><tr
id=sl_svn42_506

><td class="source">                                          1);<br></td></tr
><tr
id=sl_svn42_507

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_508

><td class="source"><br></td></tr
><tr
id=sl_svn42_509

><td class="source">    target_map_value = (SymbolMapValue*)target_node-&gt;value;<br></td></tr
><tr
id=sl_svn42_510

><td class="source">    if (number_of_symbol_names == 1) {<br></td></tr
><tr
id=sl_svn42_511

><td class="source">            list_add_value(&amp;target_map_value-&gt;symbol_values_list_head,<br></td></tr
><tr
id=sl_svn42_512

><td class="source">                                value, refcount);<br></td></tr
><tr
id=sl_svn42_513

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_514

><td class="source">        add_symbol_value(&amp;target_map_value-&gt;symbol_values_list_head,<br></td></tr
><tr
id=sl_svn42_515

><td class="source">                         &amp;symbol_names[1], number_of_symbol_names - 1, value,<br></td></tr
><tr
id=sl_svn42_516

><td class="source">                         refcount);<br></td></tr
><tr
id=sl_svn42_517

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_518

><td class="source">}<br></td></tr
><tr
id=sl_svn42_519

><td class="source"><br></td></tr
><tr
id=sl_svn42_520

><td class="source"><br></td></tr
><tr
id=sl_svn42_521

><td class="source">/* Gets the next value associated with the given hierarchy of symbols.<br></td></tr
><tr
id=sl_svn42_522

><td class="source"> * The value is returned as an output parameter with the function returning the<br></td></tr
><tr
id=sl_svn42_523

><td class="source"> * node&#39;s old refcount value if a value is found, 0 otherwise.<br></td></tr
><tr
id=sl_svn42_524

><td class="source"> * This means that a return value of 1 indicates the node was just removed from<br></td></tr
><tr
id=sl_svn42_525

><td class="source"> * the list.<br></td></tr
><tr
id=sl_svn42_526

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_527

><td class="source">static int get_symbol_value(<br></td></tr
><tr
id=sl_svn42_528

><td class="source">        ListNode * const head, const char * const symbol_names[],<br></td></tr
><tr
id=sl_svn42_529

><td class="source">        const size_t number_of_symbol_names, void **output) {<br></td></tr
><tr
id=sl_svn42_530

><td class="source">    const char* symbol_name;<br></td></tr
><tr
id=sl_svn42_531

><td class="source">    ListNode *target_node;<br></td></tr
><tr
id=sl_svn42_532

><td class="source">    assert_true(head);<br></td></tr
><tr
id=sl_svn42_533

><td class="source">    assert_true(symbol_names);<br></td></tr
><tr
id=sl_svn42_534

><td class="source">    assert_true(number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_535

><td class="source">    assert_true(output);<br></td></tr
><tr
id=sl_svn42_536

><td class="source">    symbol_name = symbol_names[0];<br></td></tr
><tr
id=sl_svn42_537

><td class="source"><br></td></tr
><tr
id=sl_svn42_538

><td class="source">    if (list_find(head, symbol_name, symbol_names_match, &amp;target_node)) {<br></td></tr
><tr
id=sl_svn42_539

><td class="source">        SymbolMapValue *map_value;<br></td></tr
><tr
id=sl_svn42_540

><td class="source">        ListNode *child_list;<br></td></tr
><tr
id=sl_svn42_541

><td class="source">        int return_value = 0;<br></td></tr
><tr
id=sl_svn42_542

><td class="source">        assert_true(target_node);<br></td></tr
><tr
id=sl_svn42_543

><td class="source">        assert_true(target_node-&gt;value);<br></td></tr
><tr
id=sl_svn42_544

><td class="source"><br></td></tr
><tr
id=sl_svn42_545

><td class="source">        map_value = (SymbolMapValue*)target_node-&gt;value;<br></td></tr
><tr
id=sl_svn42_546

><td class="source">        child_list = &amp;map_value-&gt;symbol_values_list_head;<br></td></tr
><tr
id=sl_svn42_547

><td class="source"><br></td></tr
><tr
id=sl_svn42_548

><td class="source">        if (number_of_symbol_names == 1) {<br></td></tr
><tr
id=sl_svn42_549

><td class="source">            ListNode *value_node = NULL;<br></td></tr
><tr
id=sl_svn42_550

><td class="source">            return_value = list_first(child_list, &amp;value_node);<br></td></tr
><tr
id=sl_svn42_551

><td class="source">            assert_true(return_value);<br></td></tr
><tr
id=sl_svn42_552

><td class="source">            *output = (void*) value_node-&gt;value;<br></td></tr
><tr
id=sl_svn42_553

><td class="source">            return_value = value_node-&gt;refcount;<br></td></tr
><tr
id=sl_svn42_554

><td class="source">            if (--value_node-&gt;refcount == 0) {<br></td></tr
><tr
id=sl_svn42_555

><td class="source">                list_remove_free(value_node, NULL, NULL);<br></td></tr
><tr
id=sl_svn42_556

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_557

><td class="source">        } else {<br></td></tr
><tr
id=sl_svn42_558

><td class="source">            return_value = get_symbol_value(<br></td></tr
><tr
id=sl_svn42_559

><td class="source">                child_list, &amp;symbol_names[1], number_of_symbol_names - 1,<br></td></tr
><tr
id=sl_svn42_560

><td class="source">                output);<br></td></tr
><tr
id=sl_svn42_561

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_562

><td class="source">        if (list_empty(child_list)) {<br></td></tr
><tr
id=sl_svn42_563

><td class="source">            list_remove_free(target_node, free_symbol_map_value, (void*)0);<br></td></tr
><tr
id=sl_svn42_564

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_565

><td class="source">        return return_value;<br></td></tr
><tr
id=sl_svn42_566

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_567

><td class="source">        print_error(&quot;No entries for symbol %s.\n&quot;, symbol_name);<br></td></tr
><tr
id=sl_svn42_568

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_569

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_570

><td class="source">}<br></td></tr
><tr
id=sl_svn42_571

><td class="source"><br></td></tr
><tr
id=sl_svn42_572

><td class="source"><br></td></tr
><tr
id=sl_svn42_573

><td class="source">/* Traverse down a tree of symbol values and remove the first symbol value<br></td></tr
><tr
id=sl_svn42_574

><td class="source"> * in each branch that has a refcount &lt; -1 (i.e should always be returned<br></td></tr
><tr
id=sl_svn42_575

><td class="source"> * and has been returned at least once).<br></td></tr
><tr
id=sl_svn42_576

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_577

><td class="source">static void remove_always_return_values(ListNode * const map_head,<br></td></tr
><tr
id=sl_svn42_578

><td class="source">                                        const size_t number_of_symbol_names) {<br></td></tr
><tr
id=sl_svn42_579

><td class="source">    ListNode *current;<br></td></tr
><tr
id=sl_svn42_580

><td class="source">    assert_true(map_head);<br></td></tr
><tr
id=sl_svn42_581

><td class="source">    assert_true(number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_582

><td class="source">    current = map_head-&gt;next;<br></td></tr
><tr
id=sl_svn42_583

><td class="source">    while (current != map_head) {<br></td></tr
><tr
id=sl_svn42_584

><td class="source">        SymbolMapValue * const value = (SymbolMapValue*)current-&gt;value;<br></td></tr
><tr
id=sl_svn42_585

><td class="source">        ListNode * const next = current-&gt;next;<br></td></tr
><tr
id=sl_svn42_586

><td class="source">        ListNode *child_list;<br></td></tr
><tr
id=sl_svn42_587

><td class="source">        assert_true(value);<br></td></tr
><tr
id=sl_svn42_588

><td class="source">        child_list = &amp;value-&gt;symbol_values_list_head;<br></td></tr
><tr
id=sl_svn42_589

><td class="source"><br></td></tr
><tr
id=sl_svn42_590

><td class="source">        if (!list_empty(child_list)) {<br></td></tr
><tr
id=sl_svn42_591

><td class="source">            if (number_of_symbol_names == 1) {<br></td></tr
><tr
id=sl_svn42_592

><td class="source">                ListNode * const child_node = child_list-&gt;next;<br></td></tr
><tr
id=sl_svn42_593

><td class="source">                // If this item has been returned more than once, free it.<br></td></tr
><tr
id=sl_svn42_594

><td class="source">                if (child_node-&gt;refcount &lt; -1) {<br></td></tr
><tr
id=sl_svn42_595

><td class="source">                    list_remove_free(child_node, free_value, NULL);<br></td></tr
><tr
id=sl_svn42_596

><td class="source">                }<br></td></tr
><tr
id=sl_svn42_597

><td class="source">            } else {<br></td></tr
><tr
id=sl_svn42_598

><td class="source">                remove_always_return_values(child_list,<br></td></tr
><tr
id=sl_svn42_599

><td class="source">                                            number_of_symbol_names - 1);<br></td></tr
><tr
id=sl_svn42_600

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_601

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_602

><td class="source"><br></td></tr
><tr
id=sl_svn42_603

><td class="source">        if (list_empty(child_list)) {<br></td></tr
><tr
id=sl_svn42_604

><td class="source">            list_remove_free(current, free_value, NULL);<br></td></tr
><tr
id=sl_svn42_605

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_606

><td class="source">        current = next;<br></td></tr
><tr
id=sl_svn42_607

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_608

><td class="source">}<br></td></tr
><tr
id=sl_svn42_609

><td class="source"><br></td></tr
><tr
id=sl_svn42_610

><td class="source">/* Checks if there are any leftover values set up by the test that were never<br></td></tr
><tr
id=sl_svn42_611

><td class="source"> * retrieved through execution, and fail the test if that is the case.<br></td></tr
><tr
id=sl_svn42_612

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_613

><td class="source">static int check_for_leftover_values(<br></td></tr
><tr
id=sl_svn42_614

><td class="source">        const ListNode * const map_head, const char * const error_message,<br></td></tr
><tr
id=sl_svn42_615

><td class="source">        const size_t number_of_symbol_names) {<br></td></tr
><tr
id=sl_svn42_616

><td class="source">    const ListNode *current;<br></td></tr
><tr
id=sl_svn42_617

><td class="source">    int symbols_with_leftover_values = 0;<br></td></tr
><tr
id=sl_svn42_618

><td class="source">    assert_true(map_head);<br></td></tr
><tr
id=sl_svn42_619

><td class="source">    assert_true(number_of_symbol_names);<br></td></tr
><tr
id=sl_svn42_620

><td class="source"><br></td></tr
><tr
id=sl_svn42_621

><td class="source">    for (current = map_head-&gt;next; current != map_head;<br></td></tr
><tr
id=sl_svn42_622

><td class="source">         current = current-&gt;next) {<br></td></tr
><tr
id=sl_svn42_623

><td class="source">        const SymbolMapValue * const value =<br></td></tr
><tr
id=sl_svn42_624

><td class="source">            (SymbolMapValue*)current-&gt;value;<br></td></tr
><tr
id=sl_svn42_625

><td class="source">        const ListNode *child_list;<br></td></tr
><tr
id=sl_svn42_626

><td class="source">        assert_true(value);<br></td></tr
><tr
id=sl_svn42_627

><td class="source">        child_list = &amp;value-&gt;symbol_values_list_head;<br></td></tr
><tr
id=sl_svn42_628

><td class="source"><br></td></tr
><tr
id=sl_svn42_629

><td class="source">        if (!list_empty(child_list)) {<br></td></tr
><tr
id=sl_svn42_630

><td class="source">            if (number_of_symbol_names == 1) {<br></td></tr
><tr
id=sl_svn42_631

><td class="source">                const ListNode *child_node;<br></td></tr
><tr
id=sl_svn42_632

><td class="source">                print_error(error_message, value-&gt;symbol_name);<br></td></tr
><tr
id=sl_svn42_633

><td class="source">                print_error(&quot;  Remaining item(s) declared at...\n&quot;);<br></td></tr
><tr
id=sl_svn42_634

><td class="source"><br></td></tr
><tr
id=sl_svn42_635

><td class="source">                for (child_node = child_list-&gt;next; child_node != child_list;<br></td></tr
><tr
id=sl_svn42_636

><td class="source">                     child_node = child_node-&gt;next) {<br></td></tr
><tr
id=sl_svn42_637

><td class="source">                    const SourceLocation * const location = child_node-&gt;value;<br></td></tr
><tr
id=sl_svn42_638

><td class="source">                    print_error(&quot;    &quot; SOURCE_LOCATION_FORMAT &quot;\n&quot;,<br></td></tr
><tr
id=sl_svn42_639

><td class="source">                                location-&gt;file, location-&gt;line);<br></td></tr
><tr
id=sl_svn42_640

><td class="source">                }<br></td></tr
><tr
id=sl_svn42_641

><td class="source">            } else {<br></td></tr
><tr
id=sl_svn42_642

><td class="source">                print_error(&quot;%s.&quot;, value-&gt;symbol_name);<br></td></tr
><tr
id=sl_svn42_643

><td class="source">                check_for_leftover_values(child_list, error_message,<br></td></tr
><tr
id=sl_svn42_644

><td class="source">                                          number_of_symbol_names - 1);<br></td></tr
><tr
id=sl_svn42_645

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_646

><td class="source">            symbols_with_leftover_values ++;<br></td></tr
><tr
id=sl_svn42_647

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_648

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_649

><td class="source">    return symbols_with_leftover_values;<br></td></tr
><tr
id=sl_svn42_650

><td class="source">}<br></td></tr
><tr
id=sl_svn42_651

><td class="source"><br></td></tr
><tr
id=sl_svn42_652

><td class="source"><br></td></tr
><tr
id=sl_svn42_653

><td class="source">// Get the next return value for the specified mock function.<br></td></tr
><tr
id=sl_svn42_654

><td class="source">LargestIntegralType _mock(const char * const function, const char* const file,<br></td></tr
><tr
id=sl_svn42_655

><td class="source">                          const int line) {<br></td></tr
><tr
id=sl_svn42_656

><td class="source">    void *result;<br></td></tr
><tr
id=sl_svn42_657

><td class="source">    const int rc = get_symbol_value(&amp;global_function_result_map_head,<br></td></tr
><tr
id=sl_svn42_658

><td class="source">                                    &amp;function, 1, &amp;result);<br></td></tr
><tr
id=sl_svn42_659

><td class="source">    if (rc) {<br></td></tr
><tr
id=sl_svn42_660

><td class="source">        SymbolValue * const symbol = (SymbolValue*)result;<br></td></tr
><tr
id=sl_svn42_661

><td class="source">        const LargestIntegralType value = symbol-&gt;value;<br></td></tr
><tr
id=sl_svn42_662

><td class="source">        global_last_mock_value_location = symbol-&gt;location;<br></td></tr
><tr
id=sl_svn42_663

><td class="source">        if (rc == 1) {<br></td></tr
><tr
id=sl_svn42_664

><td class="source">            free(symbol);<br></td></tr
><tr
id=sl_svn42_665

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_666

><td class="source">        return value;<br></td></tr
><tr
id=sl_svn42_667

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_668

><td class="source">        print_error(&quot;ERROR: &quot; SOURCE_LOCATION_FORMAT &quot; - Could not get value &quot;<br></td></tr
><tr
id=sl_svn42_669

><td class="source">                    &quot;to mock function %s\n&quot;, file, line, function);<br></td></tr
><tr
id=sl_svn42_670

><td class="source">        if (source_location_is_set(&amp;global_last_mock_value_location)) {<br></td></tr
><tr
id=sl_svn42_671

><td class="source">            print_error(&quot;Previously returned mock value was declared at &quot;<br></td></tr
><tr
id=sl_svn42_672

><td class="source">                        SOURCE_LOCATION_FORMAT &quot;\n&quot;,<br></td></tr
><tr
id=sl_svn42_673

><td class="source">                        global_last_mock_value_location.file,<br></td></tr
><tr
id=sl_svn42_674

><td class="source">                        global_last_mock_value_location.line);<br></td></tr
><tr
id=sl_svn42_675

><td class="source">        } else {<br></td></tr
><tr
id=sl_svn42_676

><td class="source">            print_error(&quot;There were no previously returned mock values for &quot;<br></td></tr
><tr
id=sl_svn42_677

><td class="source">                        &quot;this test.\n&quot;);<br></td></tr
><tr
id=sl_svn42_678

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_679

><td class="source">        exit_test(1);<br></td></tr
><tr
id=sl_svn42_680

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_681

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_682

><td class="source">}<br></td></tr
><tr
id=sl_svn42_683

><td class="source"><br></td></tr
><tr
id=sl_svn42_684

><td class="source"><br></td></tr
><tr
id=sl_svn42_685

><td class="source">// Add a return value for the specified mock function name.<br></td></tr
><tr
id=sl_svn42_686

><td class="source">void _will_return(const char * const function_name, const char * const file,<br></td></tr
><tr
id=sl_svn42_687

><td class="source">                  const int line, const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_688

><td class="source">                  const int count) {<br></td></tr
><tr
id=sl_svn42_689

><td class="source">    SymbolValue * const return_value = malloc(sizeof(*return_value));<br></td></tr
><tr
id=sl_svn42_690

><td class="source">    assert_true(count &gt; 0 || count == -1);<br></td></tr
><tr
id=sl_svn42_691

><td class="source">    return_value-&gt;value = value;<br></td></tr
><tr
id=sl_svn42_692

><td class="source">    set_source_location(&amp;return_value-&gt;location, file, line);<br></td></tr
><tr
id=sl_svn42_693

><td class="source">    add_symbol_value(&amp;global_function_result_map_head, &amp;function_name, 1,<br></td></tr
><tr
id=sl_svn42_694

><td class="source">                     return_value, count);<br></td></tr
><tr
id=sl_svn42_695

><td class="source">}<br></td></tr
><tr
id=sl_svn42_696

><td class="source"><br></td></tr
><tr
id=sl_svn42_697

><td class="source"><br></td></tr
><tr
id=sl_svn42_698

><td class="source">/* Add a custom parameter checking function.  If the event parameter is NULL<br></td></tr
><tr
id=sl_svn42_699

><td class="source"> * the event structure is allocated internally by this function.  If event<br></td></tr
><tr
id=sl_svn42_700

><td class="source"> * parameter is provided it must be allocated on the heap and doesn&#39;t need to<br></td></tr
><tr
id=sl_svn42_701

><td class="source"> * be deallocated by the caller.<br></td></tr
><tr
id=sl_svn42_702

><td class="source"> */<br></td></tr
><tr
id=sl_svn42_703

><td class="source">void _expect_check(<br></td></tr
><tr
id=sl_svn42_704

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_705

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_706

><td class="source">        const CheckParameterValue check_function,<br></td></tr
><tr
id=sl_svn42_707

><td class="source">        const LargestIntegralType check_data,<br></td></tr
><tr
id=sl_svn42_708

><td class="source">        CheckParameterEvent * const event, const int count) {<br></td></tr
><tr
id=sl_svn42_709

><td class="source">    CheckParameterEvent * const check =<br></td></tr
><tr
id=sl_svn42_710

><td class="source">        event ? event : malloc(sizeof(*check));<br></td></tr
><tr
id=sl_svn42_711

><td class="source">    const char* symbols[] = {function, parameter};<br></td></tr
><tr
id=sl_svn42_712

><td class="source">    check-&gt;parameter_name = parameter;<br></td></tr
><tr
id=sl_svn42_713

><td class="source">    check-&gt;check_value = check_function;<br></td></tr
><tr
id=sl_svn42_714

><td class="source">    check-&gt;check_value_data = check_data;<br></td></tr
><tr
id=sl_svn42_715

><td class="source">    set_source_location(&amp;check-&gt;location, file, line);<br></td></tr
><tr
id=sl_svn42_716

><td class="source">    add_symbol_value(&amp;global_function_parameter_map_head, symbols, 2, check,<br></td></tr
><tr
id=sl_svn42_717

><td class="source">                     count);<br></td></tr
><tr
id=sl_svn42_718

><td class="source">}<br></td></tr
><tr
id=sl_svn42_719

><td class="source"><br></td></tr
><tr
id=sl_svn42_720

><td class="source"><br></td></tr
><tr
id=sl_svn42_721

><td class="source">/* Returns 1 if the specified values are equal.  If the values are not equal<br></td></tr
><tr
id=sl_svn42_722

><td class="source"> * an error is displayed and 0 is returned. */<br></td></tr
><tr
id=sl_svn42_723

><td class="source">static int values_equal_display_error(const LargestIntegralType left,<br></td></tr
><tr
id=sl_svn42_724

><td class="source">                                      const LargestIntegralType right) {<br></td></tr
><tr
id=sl_svn42_725

><td class="source">    const int equal = left == right;<br></td></tr
><tr
id=sl_svn42_726

><td class="source">    if (!equal) {<br></td></tr
><tr
id=sl_svn42_727

><td class="source">        print_error(LargestIntegralTypePrintfFormat &quot; != &quot;<br></td></tr
><tr
id=sl_svn42_728

><td class="source">                    LargestIntegralTypePrintfFormat &quot;\n&quot;, left, right);<br></td></tr
><tr
id=sl_svn42_729

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_730

><td class="source">    return equal;<br></td></tr
><tr
id=sl_svn42_731

><td class="source">}<br></td></tr
><tr
id=sl_svn42_732

><td class="source"><br></td></tr
><tr
id=sl_svn42_733

><td class="source">/* Returns 1 if the specified values are not equal.  If the values are equal<br></td></tr
><tr
id=sl_svn42_734

><td class="source"> * an error is displayed and 0 is returned. */<br></td></tr
><tr
id=sl_svn42_735

><td class="source">static int values_not_equal_display_error(const LargestIntegralType left,<br></td></tr
><tr
id=sl_svn42_736

><td class="source">                                          const LargestIntegralType right) {<br></td></tr
><tr
id=sl_svn42_737

><td class="source">    const int not_equal = left != right;<br></td></tr
><tr
id=sl_svn42_738

><td class="source">    if (!not_equal) {<br></td></tr
><tr
id=sl_svn42_739

><td class="source">        print_error(LargestIntegralTypePrintfFormat &quot; == &quot;<br></td></tr
><tr
id=sl_svn42_740

><td class="source">                    LargestIntegralTypePrintfFormat &quot;\n&quot;, left, right);<br></td></tr
><tr
id=sl_svn42_741

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_742

><td class="source">    return not_equal;<br></td></tr
><tr
id=sl_svn42_743

><td class="source">}<br></td></tr
><tr
id=sl_svn42_744

><td class="source"><br></td></tr
><tr
id=sl_svn42_745

><td class="source"><br></td></tr
><tr
id=sl_svn42_746

><td class="source">/* Determine whether value is contained within check_integer_set.<br></td></tr
><tr
id=sl_svn42_747

><td class="source"> * If invert is 0 and the value is in the set 1 is returned, otherwise 0 is<br></td></tr
><tr
id=sl_svn42_748

><td class="source"> * returned and an error is displayed.  If invert is 1 and the value is not<br></td></tr
><tr
id=sl_svn42_749

><td class="source"> * in the set 1 is returned, otherwise 0 is returned and an error is<br></td></tr
><tr
id=sl_svn42_750

><td class="source"> * displayed. */<br></td></tr
><tr
id=sl_svn42_751

><td class="source">static int value_in_set_display_error(<br></td></tr
><tr
id=sl_svn42_752

><td class="source">        const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_753

><td class="source">        const CheckIntegerSet * const check_integer_set, const int invert) {<br></td></tr
><tr
id=sl_svn42_754

><td class="source">    int succeeded = invert;<br></td></tr
><tr
id=sl_svn42_755

><td class="source">    assert_true(check_integer_set);<br></td></tr
><tr
id=sl_svn42_756

><td class="source">    {<br></td></tr
><tr
id=sl_svn42_757

><td class="source">        const LargestIntegralType * const set = check_integer_set-&gt;set;<br></td></tr
><tr
id=sl_svn42_758

><td class="source">        const size_t size_of_set = check_integer_set-&gt;size_of_set;<br></td></tr
><tr
id=sl_svn42_759

><td class="source">        size_t i;<br></td></tr
><tr
id=sl_svn42_760

><td class="source">        for (i = 0; i &lt; size_of_set; i++) {<br></td></tr
><tr
id=sl_svn42_761

><td class="source">            if (set[i] == value) {<br></td></tr
><tr
id=sl_svn42_762

><td class="source">                // If invert = 0 and item is found, succeeded = 1.<br></td></tr
><tr
id=sl_svn42_763

><td class="source">                // If invert = 1 and item is found, succeeded = 0.<br></td></tr
><tr
id=sl_svn42_764

><td class="source">                succeeded = !succeeded;<br></td></tr
><tr
id=sl_svn42_765

><td class="source">                break;<br></td></tr
><tr
id=sl_svn42_766

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_767

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_768

><td class="source">        if (succeeded) {<br></td></tr
><tr
id=sl_svn42_769

><td class="source">            return 1;<br></td></tr
><tr
id=sl_svn42_770

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_771

><td class="source">        print_error(&quot;%d is %sin the set (&quot;, value, invert ? &quot;&quot; : &quot;not &quot;);<br></td></tr
><tr
id=sl_svn42_772

><td class="source">        for (i = 0; i &lt; size_of_set; i++) {<br></td></tr
><tr
id=sl_svn42_773

><td class="source">            print_error(&quot;%d, &quot;, set[i]);<br></td></tr
><tr
id=sl_svn42_774

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_775

><td class="source">        print_error(&quot;)\n&quot;);<br></td></tr
><tr
id=sl_svn42_776

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_777

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_778

><td class="source">}<br></td></tr
><tr
id=sl_svn42_779

><td class="source"><br></td></tr
><tr
id=sl_svn42_780

><td class="source"><br></td></tr
><tr
id=sl_svn42_781

><td class="source">/* Determine whether a value is within the specified range.  If the value is<br></td></tr
><tr
id=sl_svn42_782

><td class="source"> * within the specified range 1 is returned.  If the value isn&#39;t within the<br></td></tr
><tr
id=sl_svn42_783

><td class="source"> * specified range an error is displayed and 0 is returned. */<br></td></tr
><tr
id=sl_svn42_784

><td class="source">static int integer_in_range_display_error(<br></td></tr
><tr
id=sl_svn42_785

><td class="source">        const LargestIntegralType value, const LargestIntegralType range_min,<br></td></tr
><tr
id=sl_svn42_786

><td class="source">        const LargestIntegralType range_max) {<br></td></tr
><tr
id=sl_svn42_787

><td class="source">    if (value &gt;= range_min &amp;&amp; value &lt;= range_max) {<br></td></tr
><tr
id=sl_svn42_788

><td class="source">        return 1;<br></td></tr
><tr
id=sl_svn42_789

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_790

><td class="source">    print_error(&quot;%d is not within the range %d-%d\n&quot;, value, range_min,<br></td></tr
><tr
id=sl_svn42_791

><td class="source">                range_max);<br></td></tr
><tr
id=sl_svn42_792

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_793

><td class="source">}<br></td></tr
><tr
id=sl_svn42_794

><td class="source"><br></td></tr
><tr
id=sl_svn42_795

><td class="source"><br></td></tr
><tr
id=sl_svn42_796

><td class="source">/* Determine whether a value is within the specified range.  If the value<br></td></tr
><tr
id=sl_svn42_797

><td class="source"> * is not within the range 1 is returned.  If the value is within the<br></td></tr
><tr
id=sl_svn42_798

><td class="source"> * specified range an error is displayed and zero is returned. */<br></td></tr
><tr
id=sl_svn42_799

><td class="source">static int integer_not_in_range_display_error(<br></td></tr
><tr
id=sl_svn42_800

><td class="source">        const LargestIntegralType value, const LargestIntegralType range_min,<br></td></tr
><tr
id=sl_svn42_801

><td class="source">        const LargestIntegralType range_max) {<br></td></tr
><tr
id=sl_svn42_802

><td class="source">    if (value &lt; range_min || value &gt; range_max) {<br></td></tr
><tr
id=sl_svn42_803

><td class="source">        return 1;<br></td></tr
><tr
id=sl_svn42_804

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_805

><td class="source">    print_error(&quot;%d is within the range %d-%d\n&quot;, value, range_min,<br></td></tr
><tr
id=sl_svn42_806

><td class="source">                range_max);<br></td></tr
><tr
id=sl_svn42_807

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_808

><td class="source">}<br></td></tr
><tr
id=sl_svn42_809

><td class="source"><br></td></tr
><tr
id=sl_svn42_810

><td class="source"><br></td></tr
><tr
id=sl_svn42_811

><td class="source">/* Determine whether the specified strings are equal.  If the strings are equal<br></td></tr
><tr
id=sl_svn42_812

><td class="source"> * 1 is returned.  If they&#39;re not equal an error is displayed and 0 is<br></td></tr
><tr
id=sl_svn42_813

><td class="source"> * returned. */<br></td></tr
><tr
id=sl_svn42_814

><td class="source">static int string_equal_display_error(<br></td></tr
><tr
id=sl_svn42_815

><td class="source">        const char * const left, const char * const right) {<br></td></tr
><tr
id=sl_svn42_816

><td class="source">    if (strcmp(left, right) == 0) {<br></td></tr
><tr
id=sl_svn42_817

><td class="source">        return 1;<br></td></tr
><tr
id=sl_svn42_818

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_819

><td class="source">    print_error(&quot;\&quot;%s\&quot; != \&quot;%s\&quot;\n&quot;, left, right);<br></td></tr
><tr
id=sl_svn42_820

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_821

><td class="source">}<br></td></tr
><tr
id=sl_svn42_822

><td class="source"><br></td></tr
><tr
id=sl_svn42_823

><td class="source"><br></td></tr
><tr
id=sl_svn42_824

><td class="source">/* Determine whether the specified strings are equal.  If the strings are not<br></td></tr
><tr
id=sl_svn42_825

><td class="source"> * equal 1 is returned.  If they&#39;re not equal an error is displayed and 0 is<br></td></tr
><tr
id=sl_svn42_826

><td class="source"> * returned */<br></td></tr
><tr
id=sl_svn42_827

><td class="source">static int string_not_equal_display_error(<br></td></tr
><tr
id=sl_svn42_828

><td class="source">        const char * const left, const char * const right) {<br></td></tr
><tr
id=sl_svn42_829

><td class="source">    if (strcmp(left, right) != 0) {<br></td></tr
><tr
id=sl_svn42_830

><td class="source">        return 1;<br></td></tr
><tr
id=sl_svn42_831

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_832

><td class="source">    print_error(&quot;\&quot;%s\&quot; == \&quot;%s\&quot;\n&quot;, left, right);<br></td></tr
><tr
id=sl_svn42_833

><td class="source">    return 0;<br></td></tr
><tr
id=sl_svn42_834

><td class="source">}<br></td></tr
><tr
id=sl_svn42_835

><td class="source"><br></td></tr
><tr
id=sl_svn42_836

><td class="source"><br></td></tr
><tr
id=sl_svn42_837

><td class="source">/* Determine whether the specified areas of memory are equal.  If they&#39;re equal<br></td></tr
><tr
id=sl_svn42_838

><td class="source"> * 1 is returned otherwise an error is displayed and 0 is returned. */<br></td></tr
><tr
id=sl_svn42_839

><td class="source">static int memory_equal_display_error(const char* const a, const char* const b,<br></td></tr
><tr
id=sl_svn42_840

><td class="source">                                      const size_t size) {<br></td></tr
><tr
id=sl_svn42_841

><td class="source">    int differences = 0;<br></td></tr
><tr
id=sl_svn42_842

><td class="source">    size_t i;<br></td></tr
><tr
id=sl_svn42_843

><td class="source">    for (i = 0; i &lt; size; i++) {<br></td></tr
><tr
id=sl_svn42_844

><td class="source">        const char l = a[i];<br></td></tr
><tr
id=sl_svn42_845

><td class="source">        const char r = b[i];<br></td></tr
><tr
id=sl_svn42_846

><td class="source">        if (l != r) {<br></td></tr
><tr
id=sl_svn42_847

><td class="source">            print_error(&quot;difference at offset %d 0x%02x 0x%02x\n&quot;, i, l, r);<br></td></tr
><tr
id=sl_svn42_848

><td class="source">            differences ++;<br></td></tr
><tr
id=sl_svn42_849

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_850

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_851

><td class="source">    if (differences) {<br></td></tr
><tr
id=sl_svn42_852

><td class="source">        print_error(&quot;%d bytes of 0x%08x and 0x%08x differ\n&quot;, differences,<br></td></tr
><tr
id=sl_svn42_853

><td class="source">                    a, b);<br></td></tr
><tr
id=sl_svn42_854

><td class="source">        return 0;<br></td></tr
><tr
id=sl_svn42_855

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_856

><td class="source">    return 1;<br></td></tr
><tr
id=sl_svn42_857

><td class="source">}<br></td></tr
><tr
id=sl_svn42_858

><td class="source"><br></td></tr
><tr
id=sl_svn42_859

><td class="source"><br></td></tr
><tr
id=sl_svn42_860

><td class="source">/* Determine whether the specified areas of memory are not equal.  If they&#39;re<br></td></tr
><tr
id=sl_svn42_861

><td class="source"> * not equal 1 is returned otherwise an error is displayed and 0 is<br></td></tr
><tr
id=sl_svn42_862

><td class="source"> * returned. */<br></td></tr
><tr
id=sl_svn42_863

><td class="source">static int memory_not_equal_display_error(<br></td></tr
><tr
id=sl_svn42_864

><td class="source">        const char* const a, const char* const b, const size_t size) {<br></td></tr
><tr
id=sl_svn42_865

><td class="source">    int same = 0;<br></td></tr
><tr
id=sl_svn42_866

><td class="source">    size_t i;<br></td></tr
><tr
id=sl_svn42_867

><td class="source">    for (i = 0; i &lt; size; i++) {<br></td></tr
><tr
id=sl_svn42_868

><td class="source">        const char l = a[i];<br></td></tr
><tr
id=sl_svn42_869

><td class="source">        const char r = b[i];<br></td></tr
><tr
id=sl_svn42_870

><td class="source">        if (l == r) {<br></td></tr
><tr
id=sl_svn42_871

><td class="source">            same ++;<br></td></tr
><tr
id=sl_svn42_872

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_873

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_874

><td class="source">    if (same == size) {<br></td></tr
><tr
id=sl_svn42_875

><td class="source">        print_error(&quot;%d bytes of 0x%08x and 0x%08x the same\n&quot;, same,<br></td></tr
><tr
id=sl_svn42_876

><td class="source">                    a, b);<br></td></tr
><tr
id=sl_svn42_877

><td class="source">        return 0;<br></td></tr
><tr
id=sl_svn42_878

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_879

><td class="source">    return 1;<br></td></tr
><tr
id=sl_svn42_880

><td class="source">}<br></td></tr
><tr
id=sl_svn42_881

><td class="source"><br></td></tr
><tr
id=sl_svn42_882

><td class="source"><br></td></tr
><tr
id=sl_svn42_883

><td class="source">// CheckParameterValue callback to check whether a value is within a set.<br></td></tr
><tr
id=sl_svn42_884

><td class="source">static int check_in_set(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_885

><td class="source">                        const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_886

><td class="source">    return value_in_set_display_error(value,<br></td></tr
><tr
id=sl_svn42_887

><td class="source">        cast_largest_integral_type_to_pointer(CheckIntegerSet*,<br></td></tr
><tr
id=sl_svn42_888

><td class="source">                                              check_value_data), 0);<br></td></tr
><tr
id=sl_svn42_889

><td class="source">}<br></td></tr
><tr
id=sl_svn42_890

><td class="source"><br></td></tr
><tr
id=sl_svn42_891

><td class="source"><br></td></tr
><tr
id=sl_svn42_892

><td class="source">// CheckParameterValue callback to check whether a value isn&#39;t within a set.<br></td></tr
><tr
id=sl_svn42_893

><td class="source">static int check_not_in_set(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_894

><td class="source">                            const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_895

><td class="source">    return value_in_set_display_error(value,<br></td></tr
><tr
id=sl_svn42_896

><td class="source">        cast_largest_integral_type_to_pointer(CheckIntegerSet*,<br></td></tr
><tr
id=sl_svn42_897

><td class="source">                                              check_value_data), 1);<br></td></tr
><tr
id=sl_svn42_898

><td class="source">}<br></td></tr
><tr
id=sl_svn42_899

><td class="source"><br></td></tr
><tr
id=sl_svn42_900

><td class="source"><br></td></tr
><tr
id=sl_svn42_901

><td class="source">/* Create the callback data for check_in_set() or check_not_in_set() and<br></td></tr
><tr
id=sl_svn42_902

><td class="source"> * register a check event. */<br></td></tr
><tr
id=sl_svn42_903

><td class="source">static void expect_set(<br></td></tr
><tr
id=sl_svn42_904

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_905

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_906

><td class="source">        const LargestIntegralType values[], const size_t number_of_values,<br></td></tr
><tr
id=sl_svn42_907

><td class="source">        const CheckParameterValue check_function, const int count) {<br></td></tr
><tr
id=sl_svn42_908

><td class="source">    CheckIntegerSet * const check_integer_set =<br></td></tr
><tr
id=sl_svn42_909

><td class="source">        malloc(sizeof(*check_integer_set) +<br></td></tr
><tr
id=sl_svn42_910

><td class="source">               (sizeof(values[0]) * number_of_values));<br></td></tr
><tr
id=sl_svn42_911

><td class="source">    LargestIntegralType * const set = (LargestIntegralType*)(<br></td></tr
><tr
id=sl_svn42_912

><td class="source">        check_integer_set + 1);<br></td></tr
><tr
id=sl_svn42_913

><td class="source">    declare_initialize_value_pointer_pointer(check_data, check_integer_set);<br></td></tr
><tr
id=sl_svn42_914

><td class="source">    assert_true(values);<br></td></tr
><tr
id=sl_svn42_915

><td class="source">    assert_true(number_of_values);<br></td></tr
><tr
id=sl_svn42_916

><td class="source">    memcpy(set, values, number_of_values * sizeof(values[0]));<br></td></tr
><tr
id=sl_svn42_917

><td class="source">    check_integer_set-&gt;set = set;<br></td></tr
><tr
id=sl_svn42_918

><td class="source">    _expect_check(<br></td></tr
><tr
id=sl_svn42_919

><td class="source">        function, parameter, file, line, check_function,<br></td></tr
><tr
id=sl_svn42_920

><td class="source">        check_data.value, &amp;check_integer_set-&gt;event, count);<br></td></tr
><tr
id=sl_svn42_921

><td class="source">}<br></td></tr
><tr
id=sl_svn42_922

><td class="source"><br></td></tr
><tr
id=sl_svn42_923

><td class="source"><br></td></tr
><tr
id=sl_svn42_924

><td class="source">// Add an event to check whether a value is in a set.<br></td></tr
><tr
id=sl_svn42_925

><td class="source">void _expect_in_set(<br></td></tr
><tr
id=sl_svn42_926

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_927

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_928

><td class="source">        const LargestIntegralType values[], const size_t number_of_values,<br></td></tr
><tr
id=sl_svn42_929

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_930

><td class="source">    expect_set(function, parameter, file, line, values, number_of_values,<br></td></tr
><tr
id=sl_svn42_931

><td class="source">               check_in_set, count);<br></td></tr
><tr
id=sl_svn42_932

><td class="source">}<br></td></tr
><tr
id=sl_svn42_933

><td class="source"><br></td></tr
><tr
id=sl_svn42_934

><td class="source"><br></td></tr
><tr
id=sl_svn42_935

><td class="source">// Add an event to check whether a value isn&#39;t in a set.<br></td></tr
><tr
id=sl_svn42_936

><td class="source">void _expect_not_in_set(<br></td></tr
><tr
id=sl_svn42_937

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_938

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_939

><td class="source">        const LargestIntegralType values[], const size_t number_of_values,<br></td></tr
><tr
id=sl_svn42_940

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_941

><td class="source">    expect_set(function, parameter, file, line, values, number_of_values,<br></td></tr
><tr
id=sl_svn42_942

><td class="source">               check_not_in_set, count);<br></td></tr
><tr
id=sl_svn42_943

><td class="source">}<br></td></tr
><tr
id=sl_svn42_944

><td class="source"><br></td></tr
><tr
id=sl_svn42_945

><td class="source"><br></td></tr
><tr
id=sl_svn42_946

><td class="source">// CheckParameterValue callback to check whether a value is within a range.<br></td></tr
><tr
id=sl_svn42_947

><td class="source">static int check_in_range(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_948

><td class="source">                          const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_949

><td class="source">    CheckIntegerRange * const check_integer_range =<br></td></tr
><tr
id=sl_svn42_950

><td class="source">        cast_largest_integral_type_to_pointer(CheckIntegerRange*,<br></td></tr
><tr
id=sl_svn42_951

><td class="source">                                              check_value_data);<br></td></tr
><tr
id=sl_svn42_952

><td class="source">    assert_true(check_integer_range);<br></td></tr
><tr
id=sl_svn42_953

><td class="source">    return integer_in_range_display_error(value, check_integer_range-&gt;minimum,<br></td></tr
><tr
id=sl_svn42_954

><td class="source">                                          check_integer_range-&gt;maximum);<br></td></tr
><tr
id=sl_svn42_955

><td class="source">}<br></td></tr
><tr
id=sl_svn42_956

><td class="source"><br></td></tr
><tr
id=sl_svn42_957

><td class="source"><br></td></tr
><tr
id=sl_svn42_958

><td class="source">// CheckParameterValue callback to check whether a value is not within a range.<br></td></tr
><tr
id=sl_svn42_959

><td class="source">static int check_not_in_range(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_960

><td class="source">                              const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_961

><td class="source">    CheckIntegerRange * const check_integer_range =<br></td></tr
><tr
id=sl_svn42_962

><td class="source">        cast_largest_integral_type_to_pointer(CheckIntegerRange*,<br></td></tr
><tr
id=sl_svn42_963

><td class="source">                                              check_value_data);<br></td></tr
><tr
id=sl_svn42_964

><td class="source">    assert_true(check_integer_range);<br></td></tr
><tr
id=sl_svn42_965

><td class="source">    return integer_not_in_range_display_error(<br></td></tr
><tr
id=sl_svn42_966

><td class="source">        value, check_integer_range-&gt;minimum, check_integer_range-&gt;maximum);<br></td></tr
><tr
id=sl_svn42_967

><td class="source">}<br></td></tr
><tr
id=sl_svn42_968

><td class="source"><br></td></tr
><tr
id=sl_svn42_969

><td class="source"><br></td></tr
><tr
id=sl_svn42_970

><td class="source">/* Create the callback data for check_in_range() or check_not_in_range() and<br></td></tr
><tr
id=sl_svn42_971

><td class="source"> * register a check event. */<br></td></tr
><tr
id=sl_svn42_972

><td class="source">static void expect_range(<br></td></tr
><tr
id=sl_svn42_973

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_974

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_975

><td class="source">        const LargestIntegralType minimum, const LargestIntegralType maximum,<br></td></tr
><tr
id=sl_svn42_976

><td class="source">        const CheckParameterValue check_function, const int count) {<br></td></tr
><tr
id=sl_svn42_977

><td class="source">    CheckIntegerRange * const check_integer_range =<br></td></tr
><tr
id=sl_svn42_978

><td class="source">        malloc(sizeof(*check_integer_range));<br></td></tr
><tr
id=sl_svn42_979

><td class="source">    declare_initialize_value_pointer_pointer(check_data, check_integer_range);<br></td></tr
><tr
id=sl_svn42_980

><td class="source">    check_integer_range-&gt;minimum = minimum;<br></td></tr
><tr
id=sl_svn42_981

><td class="source">    check_integer_range-&gt;maximum = maximum;<br></td></tr
><tr
id=sl_svn42_982

><td class="source">    _expect_check(function, parameter, file, line, check_function,<br></td></tr
><tr
id=sl_svn42_983

><td class="source">                  check_data.value, &amp;check_integer_range-&gt;event, count);<br></td></tr
><tr
id=sl_svn42_984

><td class="source">}<br></td></tr
><tr
id=sl_svn42_985

><td class="source"><br></td></tr
><tr
id=sl_svn42_986

><td class="source"><br></td></tr
><tr
id=sl_svn42_987

><td class="source">// Add an event to determine whether a parameter is within a range.<br></td></tr
><tr
id=sl_svn42_988

><td class="source">void _expect_in_range(<br></td></tr
><tr
id=sl_svn42_989

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_990

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_991

><td class="source">        const LargestIntegralType minimum, const LargestIntegralType maximum,<br></td></tr
><tr
id=sl_svn42_992

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_993

><td class="source">    expect_range(function, parameter, file, line, minimum, maximum,<br></td></tr
><tr
id=sl_svn42_994

><td class="source">                 check_in_range, count);<br></td></tr
><tr
id=sl_svn42_995

><td class="source">}<br></td></tr
><tr
id=sl_svn42_996

><td class="source"><br></td></tr
><tr
id=sl_svn42_997

><td class="source"><br></td></tr
><tr
id=sl_svn42_998

><td class="source">// Add an event to determine whether a parameter is not within a range.<br></td></tr
><tr
id=sl_svn42_999

><td class="source">void _expect_not_in_range(<br></td></tr
><tr
id=sl_svn42_1000

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1001

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_1002

><td class="source">        const LargestIntegralType minimum, const LargestIntegralType maximum,<br></td></tr
><tr
id=sl_svn42_1003

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_1004

><td class="source">    expect_range(function, parameter, file, line, minimum, maximum,<br></td></tr
><tr
id=sl_svn42_1005

><td class="source">                 check_not_in_range, count);<br></td></tr
><tr
id=sl_svn42_1006

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1007

><td class="source"><br></td></tr
><tr
id=sl_svn42_1008

><td class="source"><br></td></tr
><tr
id=sl_svn42_1009

><td class="source">/* CheckParameterValue callback to check whether a value is equal to an<br></td></tr
><tr
id=sl_svn42_1010

><td class="source"> * expected value. */<br></td></tr
><tr
id=sl_svn42_1011

><td class="source">static int check_value(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1012

><td class="source">                       const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1013

><td class="source">    return values_equal_display_error(value, check_value_data);<br></td></tr
><tr
id=sl_svn42_1014

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1015

><td class="source"><br></td></tr
><tr
id=sl_svn42_1016

><td class="source"><br></td></tr
><tr
id=sl_svn42_1017

><td class="source">// Add an event to check a parameter equals an expected value.<br></td></tr
><tr
id=sl_svn42_1018

><td class="source">void _expect_value(<br></td></tr
><tr
id=sl_svn42_1019

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1020

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_1021

><td class="source">        const LargestIntegralType value, const int count) {<br></td></tr
><tr
id=sl_svn42_1022

><td class="source">    _expect_check(function, parameter, file, line, check_value, value, NULL,<br></td></tr
><tr
id=sl_svn42_1023

><td class="source">                  count);<br></td></tr
><tr
id=sl_svn42_1024

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1025

><td class="source"><br></td></tr
><tr
id=sl_svn42_1026

><td class="source"><br></td></tr
><tr
id=sl_svn42_1027

><td class="source">/* CheckParameterValue callback to check whether a value is not equal to an<br></td></tr
><tr
id=sl_svn42_1028

><td class="source"> * expected value. */<br></td></tr
><tr
id=sl_svn42_1029

><td class="source">static int check_not_value(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1030

><td class="source">                           const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1031

><td class="source">    return values_not_equal_display_error(value, check_value_data);<br></td></tr
><tr
id=sl_svn42_1032

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1033

><td class="source"><br></td></tr
><tr
id=sl_svn42_1034

><td class="source"><br></td></tr
><tr
id=sl_svn42_1035

><td class="source">// Add an event to check a parameter is not equal to an expected value.<br></td></tr
><tr
id=sl_svn42_1036

><td class="source">void _expect_not_value(<br></td></tr
><tr
id=sl_svn42_1037

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1038

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_1039

><td class="source">        const LargestIntegralType value, const int count) {<br></td></tr
><tr
id=sl_svn42_1040

><td class="source">    _expect_check(function, parameter, file, line, check_not_value, value,<br></td></tr
><tr
id=sl_svn42_1041

><td class="source">                  NULL, count);<br></td></tr
><tr
id=sl_svn42_1042

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1043

><td class="source"><br></td></tr
><tr
id=sl_svn42_1044

><td class="source"><br></td></tr
><tr
id=sl_svn42_1045

><td class="source">// CheckParameterValue callback to check whether a parameter equals a string.<br></td></tr
><tr
id=sl_svn42_1046

><td class="source">static int check_string(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1047

><td class="source">                        const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1048

><td class="source">    return string_equal_display_error(<br></td></tr
><tr
id=sl_svn42_1049

><td class="source">        cast_largest_integral_type_to_pointer(char*, value),<br></td></tr
><tr
id=sl_svn42_1050

><td class="source">        cast_largest_integral_type_to_pointer(char*, check_value_data));<br></td></tr
><tr
id=sl_svn42_1051

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1052

><td class="source"><br></td></tr
><tr
id=sl_svn42_1053

><td class="source"><br></td></tr
><tr
id=sl_svn42_1054

><td class="source">// Add an event to check whether a parameter is equal to a string.<br></td></tr
><tr
id=sl_svn42_1055

><td class="source">void _expect_string(<br></td></tr
><tr
id=sl_svn42_1056

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1057

><td class="source">        const char* const file, const int line, const char* string,<br></td></tr
><tr
id=sl_svn42_1058

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_1059

><td class="source">    declare_initialize_value_pointer_pointer(string_pointer, (char*)string);<br></td></tr
><tr
id=sl_svn42_1060

><td class="source">    _expect_check(function, parameter, file, line, check_string,<br></td></tr
><tr
id=sl_svn42_1061

><td class="source">                  string_pointer.value, NULL, count);<br></td></tr
><tr
id=sl_svn42_1062

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1063

><td class="source"><br></td></tr
><tr
id=sl_svn42_1064

><td class="source"><br></td></tr
><tr
id=sl_svn42_1065

><td class="source">/* CheckParameterValue callback to check whether a parameter is not equals to<br></td></tr
><tr
id=sl_svn42_1066

><td class="source"> * a string. */<br></td></tr
><tr
id=sl_svn42_1067

><td class="source">static int check_not_string(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1068

><td class="source">                            const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1069

><td class="source">    return string_not_equal_display_error(<br></td></tr
><tr
id=sl_svn42_1070

><td class="source">        cast_largest_integral_type_to_pointer(char*, value),<br></td></tr
><tr
id=sl_svn42_1071

><td class="source">        cast_largest_integral_type_to_pointer(char*, check_value_data));<br></td></tr
><tr
id=sl_svn42_1072

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1073

><td class="source"><br></td></tr
><tr
id=sl_svn42_1074

><td class="source"><br></td></tr
><tr
id=sl_svn42_1075

><td class="source">// Add an event to check whether a parameter is not equal to a string.<br></td></tr
><tr
id=sl_svn42_1076

><td class="source">void _expect_not_string(<br></td></tr
><tr
id=sl_svn42_1077

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1078

><td class="source">        const char* const file, const int line, const char* string,<br></td></tr
><tr
id=sl_svn42_1079

><td class="source">        const int count) {<br></td></tr
><tr
id=sl_svn42_1080

><td class="source">    declare_initialize_value_pointer_pointer(string_pointer, (char*)string);<br></td></tr
><tr
id=sl_svn42_1081

><td class="source">    _expect_check(function, parameter, file, line, check_not_string,<br></td></tr
><tr
id=sl_svn42_1082

><td class="source">                  string_pointer.value, NULL, count);<br></td></tr
><tr
id=sl_svn42_1083

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1084

><td class="source"><br></td></tr
><tr
id=sl_svn42_1085

><td class="source">/* CheckParameterValue callback to check whether a parameter equals an area of<br></td></tr
><tr
id=sl_svn42_1086

><td class="source"> * memory. */<br></td></tr
><tr
id=sl_svn42_1087

><td class="source">static int check_memory(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1088

><td class="source">                        const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1089

><td class="source">    CheckMemoryData * const check = cast_largest_integral_type_to_pointer(<br></td></tr
><tr
id=sl_svn42_1090

><td class="source">        CheckMemoryData*, check_value_data);<br></td></tr
><tr
id=sl_svn42_1091

><td class="source">    assert_true(check);<br></td></tr
><tr
id=sl_svn42_1092

><td class="source">    return memory_equal_display_error(<br></td></tr
><tr
id=sl_svn42_1093

><td class="source">        cast_largest_integral_type_to_pointer(void*, value),<br></td></tr
><tr
id=sl_svn42_1094

><td class="source">        check-&gt;memory, check-&gt;size);<br></td></tr
><tr
id=sl_svn42_1095

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1096

><td class="source"><br></td></tr
><tr
id=sl_svn42_1097

><td class="source"><br></td></tr
><tr
id=sl_svn42_1098

><td class="source">/* Create the callback data for check_memory() or check_not_memory() and<br></td></tr
><tr
id=sl_svn42_1099

><td class="source"> * register a check event. */<br></td></tr
><tr
id=sl_svn42_1100

><td class="source">static void expect_memory_setup(<br></td></tr
><tr
id=sl_svn42_1101

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1102

><td class="source">        const char* const file, const int line,<br></td></tr
><tr
id=sl_svn42_1103

><td class="source">        const void * const memory, const size_t size,<br></td></tr
><tr
id=sl_svn42_1104

><td class="source">        const CheckParameterValue check_function, const int count) {<br></td></tr
><tr
id=sl_svn42_1105

><td class="source">    CheckMemoryData * const check_data = malloc(sizeof(*check_data) + size);<br></td></tr
><tr
id=sl_svn42_1106

><td class="source">    void * const mem = (void*)(check_data + 1);<br></td></tr
><tr
id=sl_svn42_1107

><td class="source">    declare_initialize_value_pointer_pointer(check_data_pointer, check_data);<br></td></tr
><tr
id=sl_svn42_1108

><td class="source">    assert_true(memory);<br></td></tr
><tr
id=sl_svn42_1109

><td class="source">    assert_true(size);<br></td></tr
><tr
id=sl_svn42_1110

><td class="source">    memcpy(mem, memory, size);<br></td></tr
><tr
id=sl_svn42_1111

><td class="source">    check_data-&gt;memory = mem;<br></td></tr
><tr
id=sl_svn42_1112

><td class="source">    check_data-&gt;size = size;<br></td></tr
><tr
id=sl_svn42_1113

><td class="source">    _expect_check(function, parameter, file, line, check_function,<br></td></tr
><tr
id=sl_svn42_1114

><td class="source">                  check_data_pointer.value, &amp;check_data-&gt;event, count);<br></td></tr
><tr
id=sl_svn42_1115

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1116

><td class="source"><br></td></tr
><tr
id=sl_svn42_1117

><td class="source"><br></td></tr
><tr
id=sl_svn42_1118

><td class="source">// Add an event to check whether a parameter matches an area of memory.<br></td></tr
><tr
id=sl_svn42_1119

><td class="source">void _expect_memory(<br></td></tr
><tr
id=sl_svn42_1120

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1121

><td class="source">        const char* const file, const int line, const void* const memory,<br></td></tr
><tr
id=sl_svn42_1122

><td class="source">        const size_t size, const int count) {<br></td></tr
><tr
id=sl_svn42_1123

><td class="source">    expect_memory_setup(function, parameter, file, line, memory, size,<br></td></tr
><tr
id=sl_svn42_1124

><td class="source">                        check_memory, count);<br></td></tr
><tr
id=sl_svn42_1125

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1126

><td class="source"><br></td></tr
><tr
id=sl_svn42_1127

><td class="source"><br></td></tr
><tr
id=sl_svn42_1128

><td class="source">/* CheckParameterValue callback to check whether a parameter is not equal to<br></td></tr
><tr
id=sl_svn42_1129

><td class="source"> * an area of memory. */<br></td></tr
><tr
id=sl_svn42_1130

><td class="source">static int check_not_memory(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1131

><td class="source">                            const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1132

><td class="source">    CheckMemoryData * const check = cast_largest_integral_type_to_pointer(<br></td></tr
><tr
id=sl_svn42_1133

><td class="source">        CheckMemoryData*, check_value_data);<br></td></tr
><tr
id=sl_svn42_1134

><td class="source">    assert_true(check);<br></td></tr
><tr
id=sl_svn42_1135

><td class="source">    return memory_not_equal_display_error(<br></td></tr
><tr
id=sl_svn42_1136

><td class="source">        cast_largest_integral_type_to_pointer(void*, value), check-&gt;memory,<br></td></tr
><tr
id=sl_svn42_1137

><td class="source">        check-&gt;size);<br></td></tr
><tr
id=sl_svn42_1138

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1139

><td class="source"><br></td></tr
><tr
id=sl_svn42_1140

><td class="source"><br></td></tr
><tr
id=sl_svn42_1141

><td class="source">// Add an event to check whether a parameter doesn&#39;t match an area of memory.<br></td></tr
><tr
id=sl_svn42_1142

><td class="source">void _expect_not_memory(<br></td></tr
><tr
id=sl_svn42_1143

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1144

><td class="source">        const char* const file, const int line, const void* const memory,<br></td></tr
><tr
id=sl_svn42_1145

><td class="source">        const size_t size, const int count) {<br></td></tr
><tr
id=sl_svn42_1146

><td class="source">    expect_memory_setup(function, parameter, file, line, memory, size,<br></td></tr
><tr
id=sl_svn42_1147

><td class="source">                        check_not_memory, count);<br></td></tr
><tr
id=sl_svn42_1148

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1149

><td class="source"><br></td></tr
><tr
id=sl_svn42_1150

><td class="source"><br></td></tr
><tr
id=sl_svn42_1151

><td class="source">// CheckParameterValue callback that always returns 1.<br></td></tr
><tr
id=sl_svn42_1152

><td class="source">static int check_any(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1153

><td class="source">                     const LargestIntegralType check_value_data) {<br></td></tr
><tr
id=sl_svn42_1154

><td class="source">    return 1;<br></td></tr
><tr
id=sl_svn42_1155

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1156

><td class="source"><br></td></tr
><tr
id=sl_svn42_1157

><td class="source"><br></td></tr
><tr
id=sl_svn42_1158

><td class="source">// Add an event to allow any value for a parameter.<br></td></tr
><tr
id=sl_svn42_1159

><td class="source">void _expect_any(<br></td></tr
><tr
id=sl_svn42_1160

><td class="source">        const char* const function, const char* const parameter,<br></td></tr
><tr
id=sl_svn42_1161

><td class="source">        const char* const file, const int line, const int count) {<br></td></tr
><tr
id=sl_svn42_1162

><td class="source">    _expect_check(function, parameter, file, line, check_any, 0, NULL,<br></td></tr
><tr
id=sl_svn42_1163

><td class="source">                  count);<br></td></tr
><tr
id=sl_svn42_1164

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1165

><td class="source"><br></td></tr
><tr
id=sl_svn42_1166

><td class="source"><br></td></tr
><tr
id=sl_svn42_1167

><td class="source">void _check_expected(<br></td></tr
><tr
id=sl_svn42_1168

><td class="source">        const char * const function_name, const char * const parameter_name,<br></td></tr
><tr
id=sl_svn42_1169

><td class="source">        const char* file, const int line, const LargestIntegralType value) {<br></td></tr
><tr
id=sl_svn42_1170

><td class="source">    void *result;<br></td></tr
><tr
id=sl_svn42_1171

><td class="source">    const char* symbols[] = {function_name, parameter_name};<br></td></tr
><tr
id=sl_svn42_1172

><td class="source">    const int rc = get_symbol_value(&amp;global_function_parameter_map_head,<br></td></tr
><tr
id=sl_svn42_1173

><td class="source">                                    symbols, 2, &amp;result);<br></td></tr
><tr
id=sl_svn42_1174

><td class="source">    if (rc) {<br></td></tr
><tr
id=sl_svn42_1175

><td class="source">        CheckParameterEvent * const check = (CheckParameterEvent*)result;<br></td></tr
><tr
id=sl_svn42_1176

><td class="source">        int check_succeeded;<br></td></tr
><tr
id=sl_svn42_1177

><td class="source">        global_last_parameter_location = check-&gt;location;<br></td></tr
><tr
id=sl_svn42_1178

><td class="source">        check_succeeded = check-&gt;check_value(value, check-&gt;check_value_data);<br></td></tr
><tr
id=sl_svn42_1179

><td class="source">        if (rc == 1) {<br></td></tr
><tr
id=sl_svn42_1180

><td class="source">            free(check);<br></td></tr
><tr
id=sl_svn42_1181

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1182

><td class="source">        if (!check_succeeded) {<br></td></tr
><tr
id=sl_svn42_1183

><td class="source">            print_error(&quot;ERROR: Check of parameter %s, function %s failed\n&quot;<br></td></tr
><tr
id=sl_svn42_1184

><td class="source">                        &quot;Expected parameter declared at &quot;<br></td></tr
><tr
id=sl_svn42_1185

><td class="source">                        SOURCE_LOCATION_FORMAT &quot;\n&quot;,<br></td></tr
><tr
id=sl_svn42_1186

><td class="source">                        parameter_name, function_name,<br></td></tr
><tr
id=sl_svn42_1187

><td class="source">                        global_last_parameter_location.file,<br></td></tr
><tr
id=sl_svn42_1188

><td class="source">                        global_last_parameter_location.line);<br></td></tr
><tr
id=sl_svn42_1189

><td class="source">            _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1190

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1191

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_1192

><td class="source">        print_error(&quot;ERROR: &quot; SOURCE_LOCATION_FORMAT &quot; - Could not get value &quot;<br></td></tr
><tr
id=sl_svn42_1193

><td class="source">                    &quot;to check parameter %s of function %s\n&quot;, file, line,<br></td></tr
><tr
id=sl_svn42_1194

><td class="source">                    parameter_name, function_name);<br></td></tr
><tr
id=sl_svn42_1195

><td class="source">        if (source_location_is_set(&amp;global_last_parameter_location)) {<br></td></tr
><tr
id=sl_svn42_1196

><td class="source">            print_error(&quot;Previously declared parameter value was declared at &quot;<br></td></tr
><tr
id=sl_svn42_1197

><td class="source">                        SOURCE_LOCATION_FORMAT &quot;\n&quot;,<br></td></tr
><tr
id=sl_svn42_1198

><td class="source">                        global_last_parameter_location.file,<br></td></tr
><tr
id=sl_svn42_1199

><td class="source">                        global_last_parameter_location.line);<br></td></tr
><tr
id=sl_svn42_1200

><td class="source">        } else {<br></td></tr
><tr
id=sl_svn42_1201

><td class="source">            print_error(&quot;There were no previously declared parameter values &quot;<br></td></tr
><tr
id=sl_svn42_1202

><td class="source">                        &quot;for this test.\n&quot;);<br></td></tr
><tr
id=sl_svn42_1203

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1204

><td class="source">        exit_test(1);<br></td></tr
><tr
id=sl_svn42_1205

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1206

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1207

><td class="source"><br></td></tr
><tr
id=sl_svn42_1208

><td class="source"><br></td></tr
><tr
id=sl_svn42_1209

><td class="source">// Replacement for assert.<br></td></tr
><tr
id=sl_svn42_1210

><td class="source">void mock_assert(const int result, const char* const expression,<br></td></tr
><tr
id=sl_svn42_1211

><td class="source">                 const char* const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1212

><td class="source">    if (!result) {<br></td></tr
><tr
id=sl_svn42_1213

><td class="source">        if (global_expecting_assert) {<br></td></tr
><tr
id=sl_svn42_1214

><td class="source">            longjmp(global_expect_assert_env, (int)expression);<br></td></tr
><tr
id=sl_svn42_1215

><td class="source">        } else {<br></td></tr
><tr
id=sl_svn42_1216

><td class="source">            print_error(&quot;ASSERT: %s\n&quot;, expression);<br></td></tr
><tr
id=sl_svn42_1217

><td class="source">            _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1218

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1219

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1220

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1221

><td class="source"><br></td></tr
><tr
id=sl_svn42_1222

><td class="source"><br></td></tr
><tr
id=sl_svn42_1223

><td class="source">void _assert_true(const LargestIntegralType result,<br></td></tr
><tr
id=sl_svn42_1224

><td class="source">                  const char * const expression,<br></td></tr
><tr
id=sl_svn42_1225

><td class="source">                  const char * const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1226

><td class="source">    if (!result) {<br></td></tr
><tr
id=sl_svn42_1227

><td class="source">        print_error(&quot;%s\n&quot;, expression);<br></td></tr
><tr
id=sl_svn42_1228

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1229

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1230

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1231

><td class="source"><br></td></tr
><tr
id=sl_svn42_1232

><td class="source">void _assert_int_equal(<br></td></tr
><tr
id=sl_svn42_1233

><td class="source">        const LargestIntegralType a, const LargestIntegralType b,<br></td></tr
><tr
id=sl_svn42_1234

><td class="source">        const char * const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1235

><td class="source">    if (!values_equal_display_error(a, b)) {<br></td></tr
><tr
id=sl_svn42_1236

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1237

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1238

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1239

><td class="source"><br></td></tr
><tr
id=sl_svn42_1240

><td class="source"><br></td></tr
><tr
id=sl_svn42_1241

><td class="source">void _assert_int_not_equal(<br></td></tr
><tr
id=sl_svn42_1242

><td class="source">        const LargestIntegralType a, const LargestIntegralType b,<br></td></tr
><tr
id=sl_svn42_1243

><td class="source">        const char * const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1244

><td class="source">    if (!values_not_equal_display_error(a, b)) {<br></td></tr
><tr
id=sl_svn42_1245

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1246

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1247

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1248

><td class="source"><br></td></tr
><tr
id=sl_svn42_1249

><td class="source"><br></td></tr
><tr
id=sl_svn42_1250

><td class="source">void _assert_string_equal(const char * const a, const char * const b,<br></td></tr
><tr
id=sl_svn42_1251

><td class="source">                          const char * const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1252

><td class="source">    if (!string_equal_display_error(a, b)) {<br></td></tr
><tr
id=sl_svn42_1253

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1254

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1255

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1256

><td class="source"><br></td></tr
><tr
id=sl_svn42_1257

><td class="source"><br></td></tr
><tr
id=sl_svn42_1258

><td class="source">void _assert_string_not_equal(const char * const a, const char * const b,<br></td></tr
><tr
id=sl_svn42_1259

><td class="source">                              const char *file, const int line) {<br></td></tr
><tr
id=sl_svn42_1260

><td class="source">    if (!string_not_equal_display_error(a, b)) {<br></td></tr
><tr
id=sl_svn42_1261

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1262

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1263

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1264

><td class="source"><br></td></tr
><tr
id=sl_svn42_1265

><td class="source"><br></td></tr
><tr
id=sl_svn42_1266

><td class="source">void _assert_memory_equal(const void * const a, const void * const b,<br></td></tr
><tr
id=sl_svn42_1267

><td class="source">                          const size_t size, const char* const file,<br></td></tr
><tr
id=sl_svn42_1268

><td class="source">                          const int line) {<br></td></tr
><tr
id=sl_svn42_1269

><td class="source">    if (!memory_equal_display_error((const char*)a, (const char*)b, size)) {<br></td></tr
><tr
id=sl_svn42_1270

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1271

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1272

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1273

><td class="source"><br></td></tr
><tr
id=sl_svn42_1274

><td class="source"><br></td></tr
><tr
id=sl_svn42_1275

><td class="source">void _assert_memory_not_equal(const void * const a, const void * const b,<br></td></tr
><tr
id=sl_svn42_1276

><td class="source">                              const size_t size, const char* const file,<br></td></tr
><tr
id=sl_svn42_1277

><td class="source">                              const int line) {<br></td></tr
><tr
id=sl_svn42_1278

><td class="source">    if (!memory_not_equal_display_error((const char*)a, (const char*)b,<br></td></tr
><tr
id=sl_svn42_1279

><td class="source">                                        size)) {<br></td></tr
><tr
id=sl_svn42_1280

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1281

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1282

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1283

><td class="source"><br></td></tr
><tr
id=sl_svn42_1284

><td class="source"><br></td></tr
><tr
id=sl_svn42_1285

><td class="source">void _assert_in_range(<br></td></tr
><tr
id=sl_svn42_1286

><td class="source">        const LargestIntegralType value, const LargestIntegralType minimum,<br></td></tr
><tr
id=sl_svn42_1287

><td class="source">        const LargestIntegralType maximum, const char* const file,<br></td></tr
><tr
id=sl_svn42_1288

><td class="source">        const int line) {<br></td></tr
><tr
id=sl_svn42_1289

><td class="source">    if (!integer_in_range_display_error(value, minimum, maximum)) {<br></td></tr
><tr
id=sl_svn42_1290

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1291

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1292

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1293

><td class="source"><br></td></tr
><tr
id=sl_svn42_1294

><td class="source">void _assert_not_in_range(<br></td></tr
><tr
id=sl_svn42_1295

><td class="source">        const LargestIntegralType value, const LargestIntegralType minimum,<br></td></tr
><tr
id=sl_svn42_1296

><td class="source">        const LargestIntegralType maximum, const char* const file,<br></td></tr
><tr
id=sl_svn42_1297

><td class="source">        const int line) {<br></td></tr
><tr
id=sl_svn42_1298

><td class="source">    if (!integer_not_in_range_display_error(value, minimum, maximum)) {<br></td></tr
><tr
id=sl_svn42_1299

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1300

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1301

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1302

><td class="source"><br></td></tr
><tr
id=sl_svn42_1303

><td class="source">void _assert_in_set(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1304

><td class="source">                    const LargestIntegralType values[],<br></td></tr
><tr
id=sl_svn42_1305

><td class="source">                    const size_t number_of_values, const char* const file,<br></td></tr
><tr
id=sl_svn42_1306

><td class="source">                    const int line) {<br></td></tr
><tr
id=sl_svn42_1307

><td class="source">    CheckIntegerSet check_integer_set;<br></td></tr
><tr
id=sl_svn42_1308

><td class="source">    check_integer_set.set = values;<br></td></tr
><tr
id=sl_svn42_1309

><td class="source">    check_integer_set.size_of_set = number_of_values;<br></td></tr
><tr
id=sl_svn42_1310

><td class="source">    if (!value_in_set_display_error(value, &amp;check_integer_set, 0)) {<br></td></tr
><tr
id=sl_svn42_1311

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1312

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1313

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1314

><td class="source"><br></td></tr
><tr
id=sl_svn42_1315

><td class="source">void _assert_not_in_set(const LargestIntegralType value,<br></td></tr
><tr
id=sl_svn42_1316

><td class="source">                        const LargestIntegralType values[],<br></td></tr
><tr
id=sl_svn42_1317

><td class="source">                        const size_t number_of_values, const char* const file,<br></td></tr
><tr
id=sl_svn42_1318

><td class="source">                        const int line) {<br></td></tr
><tr
id=sl_svn42_1319

><td class="source">    CheckIntegerSet check_integer_set;<br></td></tr
><tr
id=sl_svn42_1320

><td class="source">    check_integer_set.set = values;<br></td></tr
><tr
id=sl_svn42_1321

><td class="source">    check_integer_set.size_of_set = number_of_values;<br></td></tr
><tr
id=sl_svn42_1322

><td class="source">    if (!value_in_set_display_error(value, &amp;check_integer_set, 1)) {<br></td></tr
><tr
id=sl_svn42_1323

><td class="source">        _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1324

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1325

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1326

><td class="source"><br></td></tr
><tr
id=sl_svn42_1327

><td class="source"><br></td></tr
><tr
id=sl_svn42_1328

><td class="source">// Get the list of allocated blocks.<br></td></tr
><tr
id=sl_svn42_1329

><td class="source">static ListNode* get_allocated_blocks_list() {<br></td></tr
><tr
id=sl_svn42_1330

><td class="source">    // If it initialized, initialize the list of allocated blocks.<br></td></tr
><tr
id=sl_svn42_1331

><td class="source">    if (!global_allocated_blocks.value) {<br></td></tr
><tr
id=sl_svn42_1332

><td class="source">        list_initialize(&amp;global_allocated_blocks);<br></td></tr
><tr
id=sl_svn42_1333

><td class="source">        global_allocated_blocks.value = (void*)1;<br></td></tr
><tr
id=sl_svn42_1334

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1335

><td class="source">    return &amp;global_allocated_blocks;<br></td></tr
><tr
id=sl_svn42_1336

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1337

><td class="source"><br></td></tr
><tr
id=sl_svn42_1338

><td class="source">// Use the real malloc in this function.<br></td></tr
><tr
id=sl_svn42_1339

><td class="source">#undef malloc<br></td></tr
><tr
id=sl_svn42_1340

><td class="source">void* _test_malloc(const size_t size, const char* file, const int line) {<br></td></tr
><tr
id=sl_svn42_1341

><td class="source">    char* ptr;<br></td></tr
><tr
id=sl_svn42_1342

><td class="source">    MallocBlockInfo *block_info;<br></td></tr
><tr
id=sl_svn42_1343

><td class="source">    ListNode * const block_list = get_allocated_blocks_list();<br></td></tr
><tr
id=sl_svn42_1344

><td class="source">    const size_t allocate_size = size + (MALLOC_GUARD_SIZE * 2) +<br></td></tr
><tr
id=sl_svn42_1345

><td class="source">        sizeof(*block_info) + MALLOC_ALIGNMENT;<br></td></tr
><tr
id=sl_svn42_1346

><td class="source">    char* const block = (char*)malloc(allocate_size);<br></td></tr
><tr
id=sl_svn42_1347

><td class="source">    assert_true(block);<br></td></tr
><tr
id=sl_svn42_1348

><td class="source"><br></td></tr
><tr
id=sl_svn42_1349

><td class="source">    // Calculate the returned address.<br></td></tr
><tr
id=sl_svn42_1350

><td class="source">    ptr = (char*)(((size_t)block + MALLOC_GUARD_SIZE + sizeof(*block_info) +<br></td></tr
><tr
id=sl_svn42_1351

><td class="source">                  MALLOC_ALIGNMENT) &amp; ~(MALLOC_ALIGNMENT - 1));<br></td></tr
><tr
id=sl_svn42_1352

><td class="source"><br></td></tr
><tr
id=sl_svn42_1353

><td class="source">    // Initialize the guard blocks.<br></td></tr
><tr
id=sl_svn42_1354

><td class="source">    memset(ptr - MALLOC_GUARD_SIZE, MALLOC_GUARD_PATTERN, MALLOC_GUARD_SIZE);<br></td></tr
><tr
id=sl_svn42_1355

><td class="source">    memset(ptr + size, MALLOC_GUARD_PATTERN, MALLOC_GUARD_SIZE);<br></td></tr
><tr
id=sl_svn42_1356

><td class="source">    memset(ptr, MALLOC_ALLOC_PATTERN, size);<br></td></tr
><tr
id=sl_svn42_1357

><td class="source"><br></td></tr
><tr
id=sl_svn42_1358

><td class="source">    block_info = (MallocBlockInfo*)(ptr - (MALLOC_GUARD_SIZE +<br></td></tr
><tr
id=sl_svn42_1359

><td class="source">                                             sizeof(*block_info)));<br></td></tr
><tr
id=sl_svn42_1360

><td class="source">    set_source_location(&amp;block_info-&gt;location, file, line);<br></td></tr
><tr
id=sl_svn42_1361

><td class="source">    block_info-&gt;allocated_size = allocate_size;<br></td></tr
><tr
id=sl_svn42_1362

><td class="source">    block_info-&gt;size = size;<br></td></tr
><tr
id=sl_svn42_1363

><td class="source">    block_info-&gt;block = block;<br></td></tr
><tr
id=sl_svn42_1364

><td class="source">    block_info-&gt;node.value = block_info;<br></td></tr
><tr
id=sl_svn42_1365

><td class="source">    list_add(block_list, &amp;block_info-&gt;node);<br></td></tr
><tr
id=sl_svn42_1366

><td class="source">    return ptr;<br></td></tr
><tr
id=sl_svn42_1367

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1368

><td class="source">#define malloc test_malloc<br></td></tr
><tr
id=sl_svn42_1369

><td class="source"><br></td></tr
><tr
id=sl_svn42_1370

><td class="source"><br></td></tr
><tr
id=sl_svn42_1371

><td class="source">void* _test_calloc(const size_t number_of_elements, const size_t size,<br></td></tr
><tr
id=sl_svn42_1372

><td class="source">                   const char* file, const int line) {<br></td></tr
><tr
id=sl_svn42_1373

><td class="source">    void* const ptr = _test_malloc(number_of_elements * size, file, line);<br></td></tr
><tr
id=sl_svn42_1374

><td class="source">    if (ptr) {<br></td></tr
><tr
id=sl_svn42_1375

><td class="source">        memset(ptr, 0, number_of_elements * size);<br></td></tr
><tr
id=sl_svn42_1376

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1377

><td class="source">    return ptr;<br></td></tr
><tr
id=sl_svn42_1378

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1379

><td class="source"><br></td></tr
><tr
id=sl_svn42_1380

><td class="source"><br></td></tr
><tr
id=sl_svn42_1381

><td class="source">// Use the real free in this function.<br></td></tr
><tr
id=sl_svn42_1382

><td class="source">#undef free<br></td></tr
><tr
id=sl_svn42_1383

><td class="source">void _test_free(void* const ptr, const char* file, const int line) {<br></td></tr
><tr
id=sl_svn42_1384

><td class="source">    unsigned int i;<br></td></tr
><tr
id=sl_svn42_1385

><td class="source">    char *block = (char*)ptr;<br></td></tr
><tr
id=sl_svn42_1386

><td class="source">    MallocBlockInfo *block_info;<br></td></tr
><tr
id=sl_svn42_1387

><td class="source">    _assert_true((int)ptr, &quot;ptr&quot;, file, line);<br></td></tr
><tr
id=sl_svn42_1388

><td class="source">    block_info = (MallocBlockInfo*)(block - (MALLOC_GUARD_SIZE +<br></td></tr
><tr
id=sl_svn42_1389

><td class="source">                                               sizeof(*block_info)));<br></td></tr
><tr
id=sl_svn42_1390

><td class="source">    // Check the guard blocks.<br></td></tr
><tr
id=sl_svn42_1391

><td class="source">    {<br></td></tr
><tr
id=sl_svn42_1392

><td class="source">        char *guards[2] = {block - MALLOC_GUARD_SIZE,<br></td></tr
><tr
id=sl_svn42_1393

><td class="source">                           block + block_info-&gt;size};<br></td></tr
><tr
id=sl_svn42_1394

><td class="source">        for (i = 0; i &lt; ARRAY_LENGTH(guards); i++) {<br></td></tr
><tr
id=sl_svn42_1395

><td class="source">            unsigned int j;<br></td></tr
><tr
id=sl_svn42_1396

><td class="source">            char * const guard = guards[i];<br></td></tr
><tr
id=sl_svn42_1397

><td class="source">            for (j = 0; j &lt; MALLOC_GUARD_SIZE; j++) {<br></td></tr
><tr
id=sl_svn42_1398

><td class="source">                const char diff = guard[j] - MALLOC_GUARD_PATTERN;<br></td></tr
><tr
id=sl_svn42_1399

><td class="source">                if (diff) {<br></td></tr
><tr
id=sl_svn42_1400

><td class="source">                    print_error(<br></td></tr
><tr
id=sl_svn42_1401

><td class="source">                        &quot;Guard block of 0x%08x size=%d allocated by &quot;<br></td></tr
><tr
id=sl_svn42_1402

><td class="source">                        SOURCE_LOCATION_FORMAT &quot; at 0x%08x is corrupt\n&quot;,<br></td></tr
><tr
id=sl_svn42_1403

><td class="source">                        (size_t)ptr, block_info-&gt;size,<br></td></tr
><tr
id=sl_svn42_1404

><td class="source">                        block_info-&gt;location.file, block_info-&gt;location.line,<br></td></tr
><tr
id=sl_svn42_1405

><td class="source">                        (size_t)&amp;guard[j]);<br></td></tr
><tr
id=sl_svn42_1406

><td class="source">                    _fail(file, line);<br></td></tr
><tr
id=sl_svn42_1407

><td class="source">                }<br></td></tr
><tr
id=sl_svn42_1408

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_1409

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1410

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1411

><td class="source">    list_remove(&amp;block_info-&gt;node, NULL, NULL);<br></td></tr
><tr
id=sl_svn42_1412

><td class="source"><br></td></tr
><tr
id=sl_svn42_1413

><td class="source">    block = block_info-&gt;block;<br></td></tr
><tr
id=sl_svn42_1414

><td class="source">    memset(block, MALLOC_FREE_PATTERN, block_info-&gt;allocated_size);<br></td></tr
><tr
id=sl_svn42_1415

><td class="source">    free(block);<br></td></tr
><tr
id=sl_svn42_1416

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1417

><td class="source">#define free test_free<br></td></tr
><tr
id=sl_svn42_1418

><td class="source"><br></td></tr
><tr
id=sl_svn42_1419

><td class="source"><br></td></tr
><tr
id=sl_svn42_1420

><td class="source">// Crudely checkpoint the current heap state.<br></td></tr
><tr
id=sl_svn42_1421

><td class="source">static const ListNode* check_point_allocated_blocks() {<br></td></tr
><tr
id=sl_svn42_1422

><td class="source">    return get_allocated_blocks_list()-&gt;prev;<br></td></tr
><tr
id=sl_svn42_1423

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1424

><td class="source"><br></td></tr
><tr
id=sl_svn42_1425

><td class="source"><br></td></tr
><tr
id=sl_svn42_1426

><td class="source">/* Display the blocks allocated after the specified check point.  This<br></td></tr
><tr
id=sl_svn42_1427

><td class="source"> * function returns the number of blocks displayed. */<br></td></tr
><tr
id=sl_svn42_1428

><td class="source">static int display_allocated_blocks(const ListNode * const check_point) {<br></td></tr
><tr
id=sl_svn42_1429

><td class="source">    const ListNode * const head = get_allocated_blocks_list();<br></td></tr
><tr
id=sl_svn42_1430

><td class="source">    const ListNode *node;<br></td></tr
><tr
id=sl_svn42_1431

><td class="source">    int allocated_blocks = 0;<br></td></tr
><tr
id=sl_svn42_1432

><td class="source">    assert_true(check_point);<br></td></tr
><tr
id=sl_svn42_1433

><td class="source">    assert_true(check_point-&gt;next);<br></td></tr
><tr
id=sl_svn42_1434

><td class="source"><br></td></tr
><tr
id=sl_svn42_1435

><td class="source">    for (node = check_point-&gt;next; node != head; node = node-&gt;next) {<br></td></tr
><tr
id=sl_svn42_1436

><td class="source">        const MallocBlockInfo * const block_info = node-&gt;value;<br></td></tr
><tr
id=sl_svn42_1437

><td class="source">        assert_true(block_info);<br></td></tr
><tr
id=sl_svn42_1438

><td class="source"><br></td></tr
><tr
id=sl_svn42_1439

><td class="source">        if (!allocated_blocks) {<br></td></tr
><tr
id=sl_svn42_1440

><td class="source">            print_error(&quot;Blocks allocated...\n&quot;);<br></td></tr
><tr
id=sl_svn42_1441

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1442

><td class="source">        print_error(&quot;  0x%08x : &quot; SOURCE_LOCATION_FORMAT &quot;\n&quot;,<br></td></tr
><tr
id=sl_svn42_1443

><td class="source">                    block_info-&gt;block, block_info-&gt;location.file,<br></td></tr
><tr
id=sl_svn42_1444

><td class="source">                    block_info-&gt;location.line);<br></td></tr
><tr
id=sl_svn42_1445

><td class="source">        allocated_blocks ++;<br></td></tr
><tr
id=sl_svn42_1446

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1447

><td class="source">    return allocated_blocks;<br></td></tr
><tr
id=sl_svn42_1448

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1449

><td class="source"><br></td></tr
><tr
id=sl_svn42_1450

><td class="source"><br></td></tr
><tr
id=sl_svn42_1451

><td class="source">// Free all blocks allocated after the specified check point.<br></td></tr
><tr
id=sl_svn42_1452

><td class="source">static void free_allocated_blocks(const ListNode * const check_point) {<br></td></tr
><tr
id=sl_svn42_1453

><td class="source">    const ListNode * const head = get_allocated_blocks_list();<br></td></tr
><tr
id=sl_svn42_1454

><td class="source">    const ListNode *node;<br></td></tr
><tr
id=sl_svn42_1455

><td class="source">    assert_true(check_point);<br></td></tr
><tr
id=sl_svn42_1456

><td class="source"><br></td></tr
><tr
id=sl_svn42_1457

><td class="source">    node = check_point-&gt;next;<br></td></tr
><tr
id=sl_svn42_1458

><td class="source">    assert_true(node);<br></td></tr
><tr
id=sl_svn42_1459

><td class="source"><br></td></tr
><tr
id=sl_svn42_1460

><td class="source">    while (node != head) {<br></td></tr
><tr
id=sl_svn42_1461

><td class="source">        MallocBlockInfo * const block_info = (MallocBlockInfo*)node-&gt;value;<br></td></tr
><tr
id=sl_svn42_1462

><td class="source">        node = node-&gt;next;<br></td></tr
><tr
id=sl_svn42_1463

><td class="source">        free((char*)block_info + sizeof(*block_info) + MALLOC_GUARD_SIZE);<br></td></tr
><tr
id=sl_svn42_1464

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1465

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1466

><td class="source"><br></td></tr
><tr
id=sl_svn42_1467

><td class="source"><br></td></tr
><tr
id=sl_svn42_1468

><td class="source">// Fail if any any blocks are allocated after the specified check point.<br></td></tr
><tr
id=sl_svn42_1469

><td class="source">static void fail_if_blocks_allocated(const ListNode * const check_point,<br></td></tr
><tr
id=sl_svn42_1470

><td class="source">                                     const char * const test_name) {<br></td></tr
><tr
id=sl_svn42_1471

><td class="source">    const int allocated_blocks = display_allocated_blocks(check_point);<br></td></tr
><tr
id=sl_svn42_1472

><td class="source">    if (allocated_blocks) {<br></td></tr
><tr
id=sl_svn42_1473

><td class="source">        free_allocated_blocks(check_point);<br></td></tr
><tr
id=sl_svn42_1474

><td class="source">        print_error(&quot;ERROR: %s leaked %d block(s)\n&quot;, test_name,<br></td></tr
><tr
id=sl_svn42_1475

><td class="source">                    allocated_blocks);<br></td></tr
><tr
id=sl_svn42_1476

><td class="source">        exit_test(1);<br></td></tr
><tr
id=sl_svn42_1477

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1478

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1479

><td class="source"><br></td></tr
><tr
id=sl_svn42_1480

><td class="source"><br></td></tr
><tr
id=sl_svn42_1481

><td class="source">void _fail(const char * const file, const int line) {<br></td></tr
><tr
id=sl_svn42_1482

><td class="source">    print_error(&quot;ERROR: &quot; SOURCE_LOCATION_FORMAT &quot; Failure!\n&quot;, file, line);<br></td></tr
><tr
id=sl_svn42_1483

><td class="source">    exit_test(1);<br></td></tr
><tr
id=sl_svn42_1484

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1485

><td class="source"><br></td></tr
><tr
id=sl_svn42_1486

><td class="source"><br></td></tr
><tr
id=sl_svn42_1487

><td class="source">#ifndef _WIN32<br></td></tr
><tr
id=sl_svn42_1488

><td class="source">static void exception_handler(int sig) {<br></td></tr
><tr
id=sl_svn42_1489

><td class="source">    print_error(&quot;%s\n&quot;, strsignal(sig));<br></td></tr
><tr
id=sl_svn42_1490

><td class="source">    exit_test(1);<br></td></tr
><tr
id=sl_svn42_1491

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1492

><td class="source"><br></td></tr
><tr
id=sl_svn42_1493

><td class="source">#else // _WIN32<br></td></tr
><tr
id=sl_svn42_1494

><td class="source"><br></td></tr
><tr
id=sl_svn42_1495

><td class="source">static LONG WINAPI exception_filter(EXCEPTION_POINTERS *exception_pointers) {<br></td></tr
><tr
id=sl_svn42_1496

><td class="source">    EXCEPTION_RECORD * const exception_record =<br></td></tr
><tr
id=sl_svn42_1497

><td class="source">        exception_pointers-&gt;ExceptionRecord;<br></td></tr
><tr
id=sl_svn42_1498

><td class="source">    const DWORD code = exception_record-&gt;ExceptionCode;<br></td></tr
><tr
id=sl_svn42_1499

><td class="source">    unsigned int i;<br></td></tr
><tr
id=sl_svn42_1500

><td class="source">    for (i = 0; i &lt; ARRAY_LENGTH(exception_codes); i++) {<br></td></tr
><tr
id=sl_svn42_1501

><td class="source">        const ExceptionCodeInfo * const code_info = &amp;exception_codes[i];<br></td></tr
><tr
id=sl_svn42_1502

><td class="source">        if (code == code_info-&gt;code) {<br></td></tr
><tr
id=sl_svn42_1503

><td class="source">            static int shown_debug_message = 0;<br></td></tr
><tr
id=sl_svn42_1504

><td class="source">            fflush(stdout);<br></td></tr
><tr
id=sl_svn42_1505

><td class="source">            print_error(&quot;%s occurred at 0x%08x.\n&quot;, code_info-&gt;description,<br></td></tr
><tr
id=sl_svn42_1506

><td class="source">                        exception_record-&gt;ExceptionAddress);<br></td></tr
><tr
id=sl_svn42_1507

><td class="source">            if (!shown_debug_message) {<br></td></tr
><tr
id=sl_svn42_1508

><td class="source">                print_error(<br></td></tr
><tr
id=sl_svn42_1509

><td class="source">                    &quot;\n&quot;<br></td></tr
><tr
id=sl_svn42_1510

><td class="source">                    &quot;To debug in Visual Studio...\n&quot;<br></td></tr
><tr
id=sl_svn42_1511

><td class="source">                    &quot;1. Select menu item File-&gt;Open Project\n&quot;<br></td></tr
><tr
id=sl_svn42_1512

><td class="source">                    &quot;2. Change &#39;Files of type&#39; to &#39;Executable Files&#39;\n&quot;<br></td></tr
><tr
id=sl_svn42_1513

><td class="source">                    &quot;3. Open this executable.\n&quot;<br></td></tr
><tr
id=sl_svn42_1514

><td class="source">                    &quot;4. Select menu item Debug-&gt;Start\n&quot;<br></td></tr
><tr
id=sl_svn42_1515

><td class="source">                    &quot;\n&quot;<br></td></tr
><tr
id=sl_svn42_1516

><td class="source">                    &quot;Alternatively, set the environment variable \n&quot;<br></td></tr
><tr
id=sl_svn42_1517

><td class="source">                    &quot;UNIT_TESTING_DEBUG to 1 and rebuild this executable, \n&quot;<br></td></tr
><tr
id=sl_svn42_1518

><td class="source">                    &quot;then click &#39;Debug&#39; in the popup dialog box.\n&quot;<br></td></tr
><tr
id=sl_svn42_1519

><td class="source">                    &quot;\n&quot;);<br></td></tr
><tr
id=sl_svn42_1520

><td class="source">                shown_debug_message = 1;<br></td></tr
><tr
id=sl_svn42_1521

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_1522

><td class="source">            exit_test(0);<br></td></tr
><tr
id=sl_svn42_1523

><td class="source">            return EXCEPTION_EXECUTE_HANDLER;<br></td></tr
><tr
id=sl_svn42_1524

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1525

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1526

><td class="source">    return EXCEPTION_CONTINUE_SEARCH;<br></td></tr
><tr
id=sl_svn42_1527

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1528

><td class="source">#endif // !_WIN32<br></td></tr
><tr
id=sl_svn42_1529

><td class="source"><br></td></tr
><tr
id=sl_svn42_1530

><td class="source"><br></td></tr
><tr
id=sl_svn42_1531

><td class="source">// Standard output and error print methods.<br></td></tr
><tr
id=sl_svn42_1532

><td class="source">void vprint_message(const char* const format, va_list args) {<br></td></tr
><tr
id=sl_svn42_1533

><td class="source">    char buffer[1024];<br></td></tr
><tr
id=sl_svn42_1534

><td class="source">    vsnprintf(buffer, sizeof(buffer), format, args);<br></td></tr
><tr
id=sl_svn42_1535

><td class="source">    printf(buffer);<br></td></tr
><tr
id=sl_svn42_1536

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_1537

><td class="source">    OutputDebugString(buffer);<br></td></tr
><tr
id=sl_svn42_1538

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_1539

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1540

><td class="source"><br></td></tr
><tr
id=sl_svn42_1541

><td class="source"><br></td></tr
><tr
id=sl_svn42_1542

><td class="source">void vprint_error(const char* const format, va_list args) {<br></td></tr
><tr
id=sl_svn42_1543

><td class="source">    char buffer[1024];<br></td></tr
><tr
id=sl_svn42_1544

><td class="source">    vsnprintf(buffer, sizeof(buffer), format, args);<br></td></tr
><tr
id=sl_svn42_1545

><td class="source">    fprintf(stderr, buffer);<br></td></tr
><tr
id=sl_svn42_1546

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_1547

><td class="source">    OutputDebugString(buffer);<br></td></tr
><tr
id=sl_svn42_1548

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_1549

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1550

><td class="source"><br></td></tr
><tr
id=sl_svn42_1551

><td class="source"><br></td></tr
><tr
id=sl_svn42_1552

><td class="source">void print_message(const char* const format, ...) {<br></td></tr
><tr
id=sl_svn42_1553

><td class="source">    va_list args;<br></td></tr
><tr
id=sl_svn42_1554

><td class="source">    va_start(args, format);<br></td></tr
><tr
id=sl_svn42_1555

><td class="source">    vprint_message(format, args);<br></td></tr
><tr
id=sl_svn42_1556

><td class="source">    va_end(args);<br></td></tr
><tr
id=sl_svn42_1557

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1558

><td class="source"><br></td></tr
><tr
id=sl_svn42_1559

><td class="source"><br></td></tr
><tr
id=sl_svn42_1560

><td class="source">void print_error(const char* const format, ...) {<br></td></tr
><tr
id=sl_svn42_1561

><td class="source">    va_list args;<br></td></tr
><tr
id=sl_svn42_1562

><td class="source">    va_start(args, format);<br></td></tr
><tr
id=sl_svn42_1563

><td class="source">    vprint_error(format, args);<br></td></tr
><tr
id=sl_svn42_1564

><td class="source">    va_end(args);<br></td></tr
><tr
id=sl_svn42_1565

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1566

><td class="source"><br></td></tr
><tr
id=sl_svn42_1567

><td class="source"><br></td></tr
><tr
id=sl_svn42_1568

><td class="source">int _run_test(<br></td></tr
><tr
id=sl_svn42_1569

><td class="source">        const char * const function_name,  const UnitTestFunction Function,<br></td></tr
><tr
id=sl_svn42_1570

><td class="source">        void ** const state, const UnitTestFunctionType function_type,<br></td></tr
><tr
id=sl_svn42_1571

><td class="source">        const void* const heap_check_point) {<br></td></tr
><tr
id=sl_svn42_1572

><td class="source">    const ListNode * const check_point = heap_check_point ?<br></td></tr
><tr
id=sl_svn42_1573

><td class="source">        heap_check_point : check_point_allocated_blocks();<br></td></tr
><tr
id=sl_svn42_1574

><td class="source">    void *current_state = NULL;<br></td></tr
><tr
id=sl_svn42_1575

><td class="source">    int rc = 1;<br></td></tr
><tr
id=sl_svn42_1576

><td class="source">    int handle_exceptions = 1;<br></td></tr
><tr
id=sl_svn42_1577

><td class="source">#ifdef _WIN32<br></td></tr
><tr
id=sl_svn42_1578

><td class="source">    handle_exceptions = !IsDebuggerPresent();<br></td></tr
><tr
id=sl_svn42_1579

><td class="source">#endif // _WIN32<br></td></tr
><tr
id=sl_svn42_1580

><td class="source">#if UNIT_TESTING_DEBUG<br></td></tr
><tr
id=sl_svn42_1581

><td class="source">    handle_exceptions = 0;<br></td></tr
><tr
id=sl_svn42_1582

><td class="source">#endif // UNIT_TESTING_DEBUG<br></td></tr
><tr
id=sl_svn42_1583

><td class="source"><br></td></tr
><tr
id=sl_svn42_1584

><td class="source">    if (handle_exceptions) {<br></td></tr
><tr
id=sl_svn42_1585

><td class="source">#ifndef _WIN32<br></td></tr
><tr
id=sl_svn42_1586

><td class="source">        unsigned int i;<br></td></tr
><tr
id=sl_svn42_1587

><td class="source">        for (i = 0; i &lt; ARRAY_LENGTH(exception_signals); i++) {<br></td></tr
><tr
id=sl_svn42_1588

><td class="source">            default_signal_functions[i] = signal(<br></td></tr
><tr
id=sl_svn42_1589

><td class="source">                exception_signals[i], exception_handler);<br></td></tr
><tr
id=sl_svn42_1590

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1591

><td class="source">#else // _WIN32<br></td></tr
><tr
id=sl_svn42_1592

><td class="source">        previous_exception_filter = SetUnhandledExceptionFilter(<br></td></tr
><tr
id=sl_svn42_1593

><td class="source">            exception_filter);<br></td></tr
><tr
id=sl_svn42_1594

><td class="source">#endif // !_WIN32<br></td></tr
><tr
id=sl_svn42_1595

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1596

><td class="source"><br></td></tr
><tr
id=sl_svn42_1597

><td class="source">    if (function_type == UNIT_TEST_FUNCTION_TYPE_TEST) {<br></td></tr
><tr
id=sl_svn42_1598

><td class="source">        print_message(&quot;%s: Starting test\n&quot;, function_name);<br></td></tr
><tr
id=sl_svn42_1599

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1600

><td class="source">    initialize_testing(function_name);<br></td></tr
><tr
id=sl_svn42_1601

><td class="source">    global_running_test = 1;<br></td></tr
><tr
id=sl_svn42_1602

><td class="source">    if (setjmp(global_run_test_env) == 0) {<br></td></tr
><tr
id=sl_svn42_1603

><td class="source">        Function(state ? state : &amp;current_state);<br></td></tr
><tr
id=sl_svn42_1604

><td class="source">        fail_if_leftover_values(function_name);<br></td></tr
><tr
id=sl_svn42_1605

><td class="source"><br></td></tr
><tr
id=sl_svn42_1606

><td class="source">        /* If this is a setup function then ignore any allocated blocks<br></td></tr
><tr
id=sl_svn42_1607

><td class="source">         * only ensure they&#39;re deallocated on tear down. */<br></td></tr
><tr
id=sl_svn42_1608

><td class="source">        if (function_type != UNIT_TEST_FUNCTION_TYPE_SETUP) {<br></td></tr
><tr
id=sl_svn42_1609

><td class="source">            fail_if_blocks_allocated(check_point, function_name);<br></td></tr
><tr
id=sl_svn42_1610

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1611

><td class="source"><br></td></tr
><tr
id=sl_svn42_1612

><td class="source">        global_running_test = 0;<br></td></tr
><tr
id=sl_svn42_1613

><td class="source"><br></td></tr
><tr
id=sl_svn42_1614

><td class="source">        if (function_type == UNIT_TEST_FUNCTION_TYPE_TEST) {<br></td></tr
><tr
id=sl_svn42_1615

><td class="source">            print_message(&quot;%s: Test completed successfully.\n&quot;, function_name);<br></td></tr
><tr
id=sl_svn42_1616

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1617

><td class="source">        rc = 0;<br></td></tr
><tr
id=sl_svn42_1618

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_1619

><td class="source">        global_running_test = 0;<br></td></tr
><tr
id=sl_svn42_1620

><td class="source">        print_message(&quot;%s: Test failed.\n&quot;, function_name);<br></td></tr
><tr
id=sl_svn42_1621

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1622

><td class="source">    teardown_testing(function_name);<br></td></tr
><tr
id=sl_svn42_1623

><td class="source"><br></td></tr
><tr
id=sl_svn42_1624

><td class="source">    if (handle_exceptions) {<br></td></tr
><tr
id=sl_svn42_1625

><td class="source">#ifndef _WIN32<br></td></tr
><tr
id=sl_svn42_1626

><td class="source">        unsigned int i;<br></td></tr
><tr
id=sl_svn42_1627

><td class="source">        for (i = 0; i &lt; ARRAY_LENGTH(exception_signals); i++) {<br></td></tr
><tr
id=sl_svn42_1628

><td class="source">            signal(exception_signals[i], default_signal_functions[i]);<br></td></tr
><tr
id=sl_svn42_1629

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1630

><td class="source">#else // _WIN32<br></td></tr
><tr
id=sl_svn42_1631

><td class="source">        if (previous_exception_filter) {<br></td></tr
><tr
id=sl_svn42_1632

><td class="source">            SetUnhandledExceptionFilter(previous_exception_filter);<br></td></tr
><tr
id=sl_svn42_1633

><td class="source">            previous_exception_filter = NULL;<br></td></tr
><tr
id=sl_svn42_1634

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1635

><td class="source">#endif // !_WIN32<br></td></tr
><tr
id=sl_svn42_1636

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1637

><td class="source"><br></td></tr
><tr
id=sl_svn42_1638

><td class="source">    return rc;<br></td></tr
><tr
id=sl_svn42_1639

><td class="source">}<br></td></tr
><tr
id=sl_svn42_1640

><td class="source"><br></td></tr
><tr
id=sl_svn42_1641

><td class="source"><br></td></tr
><tr
id=sl_svn42_1642

><td class="source">int _run_tests(const UnitTest * const tests, const size_t number_of_tests) {<br></td></tr
><tr
id=sl_svn42_1643

><td class="source">    // Whether to execute the next test.<br></td></tr
><tr
id=sl_svn42_1644

><td class="source">    int run_next_test = 1;<br></td></tr
><tr
id=sl_svn42_1645

><td class="source">    // Whether the previous test failed.<br></td></tr
><tr
id=sl_svn42_1646

><td class="source">    int previous_test_failed = 0;<br></td></tr
><tr
id=sl_svn42_1647

><td class="source">    // Check point of the heap state.<br></td></tr
><tr
id=sl_svn42_1648

><td class="source">    const ListNode * const check_point = check_point_allocated_blocks();<br></td></tr
><tr
id=sl_svn42_1649

><td class="source">    // Current test being executed.<br></td></tr
><tr
id=sl_svn42_1650

><td class="source">    size_t current_test = 0;<br></td></tr
><tr
id=sl_svn42_1651

><td class="source">    // Number of tests executed.<br></td></tr
><tr
id=sl_svn42_1652

><td class="source">    size_t tests_executed = 0;<br></td></tr
><tr
id=sl_svn42_1653

><td class="source">    // Number of failed tests.<br></td></tr
><tr
id=sl_svn42_1654

><td class="source">    size_t total_failed = 0;<br></td></tr
><tr
id=sl_svn42_1655

><td class="source">    // Number of setup functions.<br></td></tr
><tr
id=sl_svn42_1656

><td class="source">    size_t setups = 0;<br></td></tr
><tr
id=sl_svn42_1657

><td class="source">    // Number of teardown functions.<br></td></tr
><tr
id=sl_svn42_1658

><td class="source">    size_t teardowns = 0;<br></td></tr
><tr
id=sl_svn42_1659

><td class="source">    /* A stack of test states.  A state is pushed on the stack<br></td></tr
><tr
id=sl_svn42_1660

><td class="source">     * when a test setup occurs and popped on tear down. */<br></td></tr
><tr
id=sl_svn42_1661

><td class="source">    TestState* test_states = malloc(number_of_tests * sizeof(*test_states));<br></td></tr
><tr
id=sl_svn42_1662

><td class="source">    size_t number_of_test_states = 0;<br></td></tr
><tr
id=sl_svn42_1663

><td class="source">    // Names of the tests that failed.<br></td></tr
><tr
id=sl_svn42_1664

><td class="source">    const char** failed_names = malloc(number_of_tests *<br></td></tr
><tr
id=sl_svn42_1665

><td class="source">                                       sizeof(*failed_names));<br></td></tr
><tr
id=sl_svn42_1666

><td class="source">    void **current_state = NULL;<br></td></tr
><tr
id=sl_svn42_1667

><td class="source">    // Make sure LargestIntegralType is at least the size of a pointer.<br></td></tr
><tr
id=sl_svn42_1668

><td class="source">    assert_true(sizeof(LargestIntegralType) &gt;= sizeof(void*));<br></td></tr
><tr
id=sl_svn42_1669

><td class="source"><br></td></tr
><tr
id=sl_svn42_1670

><td class="source">    while (current_test &lt; number_of_tests) {<br></td></tr
><tr
id=sl_svn42_1671

><td class="source">        const ListNode *test_check_point = NULL;<br></td></tr
><tr
id=sl_svn42_1672

><td class="source">        TestState *current_TestState;<br></td></tr
><tr
id=sl_svn42_1673

><td class="source">        const UnitTest * const test = &amp;tests[current_test++];<br></td></tr
><tr
id=sl_svn42_1674

><td class="source">        if (!test-&gt;function) {<br></td></tr
><tr
id=sl_svn42_1675

><td class="source">            continue;<br></td></tr
><tr
id=sl_svn42_1676

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1677

><td class="source"><br></td></tr
><tr
id=sl_svn42_1678

><td class="source">        switch (test-&gt;function_type) {<br></td></tr
><tr
id=sl_svn42_1679

><td class="source">        case UNIT_TEST_FUNCTION_TYPE_TEST:<br></td></tr
><tr
id=sl_svn42_1680

><td class="source">            run_next_test = 1;<br></td></tr
><tr
id=sl_svn42_1681

><td class="source">            break;<br></td></tr
><tr
id=sl_svn42_1682

><td class="source">        case UNIT_TEST_FUNCTION_TYPE_SETUP: {<br></td></tr
><tr
id=sl_svn42_1683

><td class="source">            // Checkpoint the heap before the setup.<br></td></tr
><tr
id=sl_svn42_1684

><td class="source">            current_TestState = &amp;test_states[number_of_test_states++];<br></td></tr
><tr
id=sl_svn42_1685

><td class="source">            current_TestState-&gt;check_point = check_point_allocated_blocks();<br></td></tr
><tr
id=sl_svn42_1686

><td class="source">            test_check_point = current_TestState-&gt;check_point;<br></td></tr
><tr
id=sl_svn42_1687

><td class="source">            current_state = &amp;current_TestState-&gt;state;<br></td></tr
><tr
id=sl_svn42_1688

><td class="source">            *current_state = NULL;<br></td></tr
><tr
id=sl_svn42_1689

><td class="source">            run_next_test = 1;<br></td></tr
><tr
id=sl_svn42_1690

><td class="source">            setups ++;<br></td></tr
><tr
id=sl_svn42_1691

><td class="source">            break;<br></td></tr
><tr
id=sl_svn42_1692

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1693

><td class="source">        case UNIT_TEST_FUNCTION_TYPE_TEARDOWN:<br></td></tr
><tr
id=sl_svn42_1694

><td class="source">            // Check the heap based on the last setup checkpoint.<br></td></tr
><tr
id=sl_svn42_1695

><td class="source">            assert_true(number_of_test_states);<br></td></tr
><tr
id=sl_svn42_1696

><td class="source">            current_TestState = &amp;test_states[--number_of_test_states];<br></td></tr
><tr
id=sl_svn42_1697

><td class="source">            test_check_point = current_TestState-&gt;check_point;<br></td></tr
><tr
id=sl_svn42_1698

><td class="source">            current_state = &amp;current_TestState-&gt;state;<br></td></tr
><tr
id=sl_svn42_1699

><td class="source">            teardowns ++;<br></td></tr
><tr
id=sl_svn42_1700

><td class="source">            break;<br></td></tr
><tr
id=sl_svn42_1701

><td class="source">        default:<br></td></tr
><tr
id=sl_svn42_1702

><td class="source">            print_error(&quot;Invalid unit test function type %d\n&quot;,<br></td></tr
><tr
id=sl_svn42_1703

><td class="source">                        test-&gt;function_type);<br></td></tr
><tr
id=sl_svn42_1704

><td class="source">            exit_test(1);<br></td></tr
><tr
id=sl_svn42_1705

><td class="source">            break;<br></td></tr
><tr
id=sl_svn42_1706

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1707

><td class="source"><br></td></tr
><tr
id=sl_svn42_1708

><td class="source">        if (run_next_test) {<br></td></tr
><tr
id=sl_svn42_1709

><td class="source">            int failed = _run_test(test-&gt;name, test-&gt;function, current_state,<br></td></tr
><tr
id=sl_svn42_1710

><td class="source">                                   test-&gt;function_type, test_check_point);<br></td></tr
><tr
id=sl_svn42_1711

><td class="source">            if (failed) {<br></td></tr
><tr
id=sl_svn42_1712

><td class="source">                failed_names[total_failed] = test-&gt;name;<br></td></tr
><tr
id=sl_svn42_1713

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_1714

><td class="source"><br></td></tr
><tr
id=sl_svn42_1715

><td class="source">            switch (test-&gt;function_type) {<br></td></tr
><tr
id=sl_svn42_1716

><td class="source">            case UNIT_TEST_FUNCTION_TYPE_TEST:<br></td></tr
><tr
id=sl_svn42_1717

><td class="source">                previous_test_failed = failed;<br></td></tr
><tr
id=sl_svn42_1718

><td class="source">                total_failed += failed;<br></td></tr
><tr
id=sl_svn42_1719

><td class="source">                tests_executed ++;<br></td></tr
><tr
id=sl_svn42_1720

><td class="source">                break;<br></td></tr
><tr
id=sl_svn42_1721

><td class="source"><br></td></tr
><tr
id=sl_svn42_1722

><td class="source">            case UNIT_TEST_FUNCTION_TYPE_SETUP:<br></td></tr
><tr
id=sl_svn42_1723

><td class="source">                if (failed) {<br></td></tr
><tr
id=sl_svn42_1724

><td class="source">                    total_failed ++;<br></td></tr
><tr
id=sl_svn42_1725

><td class="source">                    tests_executed ++;<br></td></tr
><tr
id=sl_svn42_1726

><td class="source">                    // Skip forward until the next test or setup function.<br></td></tr
><tr
id=sl_svn42_1727

><td class="source">                    run_next_test = 0;<br></td></tr
><tr
id=sl_svn42_1728

><td class="source">                }<br></td></tr
><tr
id=sl_svn42_1729

><td class="source">                previous_test_failed = 0;<br></td></tr
><tr
id=sl_svn42_1730

><td class="source">                break;<br></td></tr
><tr
id=sl_svn42_1731

><td class="source"><br></td></tr
><tr
id=sl_svn42_1732

><td class="source">            case UNIT_TEST_FUNCTION_TYPE_TEARDOWN:<br></td></tr
><tr
id=sl_svn42_1733

><td class="source">                // If this test failed.<br></td></tr
><tr
id=sl_svn42_1734

><td class="source">                if (failed &amp;&amp; !previous_test_failed) {<br></td></tr
><tr
id=sl_svn42_1735

><td class="source">                    total_failed ++;<br></td></tr
><tr
id=sl_svn42_1736

><td class="source">                }<br></td></tr
><tr
id=sl_svn42_1737

><td class="source">                break;<br></td></tr
><tr
id=sl_svn42_1738

><td class="source">            default:<br></td></tr
><tr
id=sl_svn42_1739

><td class="source">                assert_false(&quot;BUG: shouldn&#39;t be here!&quot;);<br></td></tr
><tr
id=sl_svn42_1740

><td class="source">                break;<br></td></tr
><tr
id=sl_svn42_1741

><td class="source">            }<br></td></tr
><tr
id=sl_svn42_1742

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1743

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1744

><td class="source"><br></td></tr
><tr
id=sl_svn42_1745

><td class="source">    if (total_failed) {<br></td></tr
><tr
id=sl_svn42_1746

><td class="source">        size_t i;<br></td></tr
><tr
id=sl_svn42_1747

><td class="source">        print_error(&quot;%d out of %d tests failed!\n&quot;, total_failed,<br></td></tr
><tr
id=sl_svn42_1748

><td class="source">                    tests_executed);<br></td></tr
><tr
id=sl_svn42_1749

><td class="source">        for (i = 0; i &lt; total_failed; i++) {<br></td></tr
><tr
id=sl_svn42_1750

><td class="source">            print_error(&quot;    %s\n&quot;, failed_names[i]);<br></td></tr
><tr
id=sl_svn42_1751

><td class="source">        }<br></td></tr
><tr
id=sl_svn42_1752

><td class="source">    } else {<br></td></tr
><tr
id=sl_svn42_1753

><td class="source">        print_message(&quot;All %d tests passed\n&quot;, tests_executed);<br></td></tr
><tr
id=sl_svn42_1754

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1755

><td class="source"><br></td></tr
><tr
id=sl_svn42_1756

><td class="source">    if (number_of_test_states) {<br></td></tr
><tr
id=sl_svn42_1757

><td class="source">        print_error(&quot;Mismatched number of setup %d and teardown %d &quot;<br></td></tr
><tr
id=sl_svn42_1758

><td class="source">                    &quot;functions\n&quot;, setups, teardowns);<br></td></tr
><tr
id=sl_svn42_1759

><td class="source">        total_failed = -1;<br></td></tr
><tr
id=sl_svn42_1760

><td class="source">    }<br></td></tr
><tr
id=sl_svn42_1761

><td class="source"><br></td></tr
><tr
id=sl_svn42_1762

><td class="source">    free(test_states);<br></td></tr
><tr
id=sl_svn42_1763

><td class="source">    free((void*)failed_names);<br></td></tr
><tr
id=sl_svn42_1764

><td class="source"><br></td></tr
><tr
id=sl_svn42_1765

><td class="source">    fail_if_blocks_allocated(check_point, &quot;run_tests&quot;);<br></td></tr
><tr
id=sl_svn42_1766

><td class="source">    return (int)total_failed;<br></td></tr
><tr
id=sl_svn42_1767

><td class="source">}<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn42_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn42_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/cmockery/source/detail?spec=svn42&amp;r=42">r42</a>
 by stewartamiles
 on Aug 28, 2009
 &nbsp; <a href="/p/cmockery/source/diff?spec=svn42&r=42&amp;format=side&amp;path=/trunk/src/cmockery.c&amp;old_path=/trunk/src/cmockery.c&amp;old=41">Diff</a>
 </div>
 <pre>* Fixed assert_*() macros so they no
longer truncate values to int.
* Fixed printf format specifier for
unsigned long long.
* Worked around a 64-bit gcc warning when
casting a 32-bit integer to
  a pointer in the expect_assert_failure()
macro.

</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/cmockery/source/detail?r=42&spec=svn42';
 var publish_url = '/p/cmockery/source/detail?r=42&spec=svn42#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/src/cmockery.c');
 changed_urls.push('/p/cmockery/source/browse/trunk/src/cmockery.c?r\x3d42\x26spec\x3dsvn42');
 
 var selected_path = '/trunk/src/cmockery.c';
 
 
 changed_paths.push('/trunk/src/google/cmockery.h');
 changed_urls.push('/p/cmockery/source/browse/trunk/src/google/cmockery.h?r\x3d42\x26spec\x3dsvn42');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/cmockery/source/browse/trunk/src/cmockery.c?r=42&amp;spec=svn42"
 selected="selected"
 >/trunk/src/cmockery.c</option>
 
 <option value="/p/cmockery/source/browse/trunk/src/google/cmockery.h?r=42&amp;spec=svn42"
 
 >/trunk/src/google/cmockery.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 <div style="white-space:nowrap">
 Project members,
 <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fcmockery%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcmockery.c&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fcmockery%2Fsource%2Fbrowse%2Ftrunk%2Fsrc%2Fcmockery.c"
 >sign in</a> to write a code review</div>


 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/cmockery/source/detail?spec=svn42&r=41">r41</a>
 by stewartamiles
 on Aug 14, 2009
 &nbsp; <a href="/p/cmockery/source/diff?spec=svn42&r=41&amp;format=side&amp;path=/trunk/src/cmockery.c&amp;old_path=/trunk/src/cmockery.c&amp;old=38">Diff</a>
 <br>
 <pre class="ifOpened">Fixed memory_not_equal_display_error()
to display an error if memory blocks
are the same.

</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/cmockery/source/detail?spec=svn42&r=38">r38</a>
 by stewartamiles
 on Jul 23, 2009
 &nbsp; <a href="/p/cmockery/source/diff?spec=svn42&r=38&amp;format=side&amp;path=/trunk/src/cmockery.c&amp;old_path=/trunk/src/cmockery.c&amp;old=37">Diff</a>
 <br>
 <pre class="ifOpened">Fixed truncation in integer range
checking event structure to store min
and max values as LargestIntegralType
rather than int.

</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/cmockery/source/detail?spec=svn42&r=37">r37</a>
 by stewartamiles
 on Jul 23, 2009
 &nbsp; <a href="/p/cmockery/source/diff?spec=svn42&r=37&amp;format=side&amp;path=/trunk/src/cmockery.c&amp;old_path=/trunk/src/cmockery.c&amp;old=34">Diff</a>
 <br>
 <pre class="ifOpened">* Support for mocking long long (&gt;=
64-bit) parameters.
* Changed tabs to spaces in
cmockery.c/.h to be consistent with
the other source files.
...</pre>
 </div>
 
 
 <a href="/p/cmockery/source/list?path=/trunk/src/cmockery.c&start=42">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 62920 bytes,
 1767 lines</div>
 
 <div><a href="//cmockery.googlecode.com/svn/trunk/src/cmockery.c">View raw file</a></div>
 </div>
 
 <div id="props">
 <p>File properties</p>
 <dl>
 
 <dt>svn:executable</dt>
 <dd>*</dd>
 
 </dl>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/17950784993885590195/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/17950784993885590195/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://kibbles.googlecode.com/files/kibbles-1.3.3.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/17950784993885590195/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn42': '/trunk/src/cmockery.c'}
 codereviews = CR_controller.setup(
 {"profileUrl":null,"token":null,"assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/17950784993885590195","projectHomeUrl":"/p/cmockery","relativeBaseUrl":"","projectName":"cmockery","loggedInUserEmail":null}, '', 'svn42', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/17950784993885590195/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/17950784993885590195/js/ph_core.js"></script>
 
 
 
 
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
</div> 
<div id="footer" dir="ltr">
 <div class="text">
 &copy;2011 Google -
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>
 
 


 
 </body>
</html>

