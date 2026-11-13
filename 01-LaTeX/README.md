# LaTeX Documentation

## 1. Introduction

LaTeX is a document preparation system used to create professional-quality technical and academic documents. It is particularly useful for documents containing mathematical equations, tables, figures, references, and structured content.

Unlike traditional word processors, LaTeX uses markup commands to define the structure and formatting of a document.

## 2. Basic Document Structure

Every LaTeX document follows a standard structure consisting of two main parts:

### 2.1 Preamble

The preamble is everything written before `\begin{document}`.

It contains:
- Document class declaration.
- Packages required for additional functionality.
- Formatting configurations.

Example:

```latex
\documentclass[12pt,a4paper]{article}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{amsmath}
```

### 2.2 Document Body

The document body starts with `\begin{document}` and ends with `\end{document}`.

It contains the actual content that appears in the generated document.

### 2.3 Complete Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{amsmath}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

LaTeX is used to create professional documents.

\section{Features}

LaTeX supports equations, tables and images.

\end{document}
```

### 2.4 Explanation of Important Commands

| Command | Description |
|---|---|
| `\documentclass{}` | Defines the document type |
| `\usepackage{}` | Includes additional packages |
| `\title{}` | Defines the document title |
| `\author{}` | Specifies the author |
| `\date{}` | Specifies the date |
| `\begin{document}` | Starts the document body |
| `\maketitle` | Generates the title |
| `\end{document}` | Ends the document |

**Note:** LaTeX commands generally begin with a backslash (`\`). Curly braces `{}` are used to provide arguments to commands.

## 3. Document Classes

A document class defines the overall structure and formatting of a LaTeX document. It is specified using the `\documentclass{}` command in the preamble.

### Syntax

```latex
\documentclass[options]{class}
```

- `class`: Specifies the type of document.
- `options`: Specifies additional formatting options, such as font size and paper size.

### Common Document Classes

| Class | Purpose |
|---|---|
| `article` | Articles, assignments, short reports and research papers. |
| `report` | Longer reports, projects and dissertations. |
| `book` | Books and lengthy documents divided into chapters. |
| `beamer` | Creating presentations and slides. |
| `letter` | Writing formal letters. |
| `exam` | Preparing question papers and examinations. |

### Example: Article Class

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}

\section{Introduction}
This is an article document.

\subsection{Overview}
This is a subsection.

\end{document}
```


## 4. Title Page and Abstract

A title page contains basic information about a document, such as its title, author and date.

### Important Commands

| Command | Purpose |
|---|---|
| `\title{}` | Specifies the document title. |
| `\author{}` | Specifies the author's name. |
| `\date{}` | Specifies the date. |
| `\maketitle` | Generates the title section using the information provided. |
| `\today` | Automatically inserts the current date. |

### Example: Creating a Title

```latex
\documentclass{article}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is my document.

\end{document}
```

### Abstract

An abstract is a short summary of the main purpose and content of a document.

LaTeX provides the `abstract` environment to create one.

**Syntax:**

```latex
\begin{abstract}
Write a brief summary of your document here.
\end{abstract}
```

### Complete Example

```latex
\documentclass{article}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\begin{abstract}
This document introduces the basics of LaTeX
and its applications in document preparation.
\end{abstract}

\section{Introduction}
LaTeX is a document preparation system.

\end{document}
```

**Remember:**
- Define title, author and date in the preamble.
- Use `\maketitle` inside the document body.
- The abstract environment is generally placed after the title and before the main sections.

## 5. Text Formatting and Styling

LaTeX provides commands to change the appearance of text, including bold, italic, underline, font size and alignment.

### Basic Text Formatting

| Command | Output / Purpose |
|---|---|
| `\textbf{Text}` | **Bold text** |
| `\textit{Text}` | *Italic text* |
| `\underline{Text}` | Underlined text |
| `\texttt{Text}` | Monospaced text |
| `\emph{Text}` | Emphasized text |

### Example

```latex
\documentclass{article}

\begin{document}

This is normal text.

\textbf{This is bold text.}

\textit{This is italic text.}

\underline{This is underlined text.}

\texttt{This is monospaced text.}

\emph{This is emphasized text.}

\end{document}
```

### Font Sizes

LaTeX provides predefined commands to change font size.

| Command | Size |
|---|---|
| `\tiny` | Very small |
| `\scriptsize` | Script size |
| `\footnotesize` | Footnote size |
| `\small` | Small |
| `\normalsize` | Normal |
| `\large` | Large |
| `\Large` | Larger |
| `\LARGE` | Very large |
| `\huge` | Huge |
| `\Huge` | Largest |

Example:

```latex
{\Large This text is large.}

{\small This text is small.}
```

Curly braces restrict the font-size change to the text inside them.

### Text Alignment

| Environment | Purpose |
|---|---|
| `center` | Centers the text. |
| `flushleft` | Aligns text to the left. |
| `flushright` | Aligns text to the right. |

Example:

```latex
\begin{center}
This text is centered.
\end{center}

\begin{flushleft}
This text is left aligned.
\end{flushleft}

\begin{flushright}
This text is right aligned.
\end{flushright}
```

### Useful Styling Packages

| Package | Purpose |
|---|---|
| `sectsty` | Customizes section heading fonts. |
| `fontspec` | Provides access to system fonts (typically with XeLaTeX or LuaLaTeX). |
| `xcolor` | Adds text and page colours. |

Example of changing text colour:

```latex
\usepackage{xcolor}

\textcolor{red}{This text is red.}
```

**Remember:** Packages must be loaded in the preamble, before `\begin{document}`.

## 6. Text and Page Layout

LaTeX provides commands to control paragraphs, line breaks, page breaks and text positioning.

### Line Breaks and Paragraphs

| Command | Purpose |
|---|---|
| `\\` | Starts a new line. |
| `\newline` | Starts a new line. |
| `\par` | Ends the current paragraph. |
| Blank line | Creates a new paragraph. |

Example:

```latex
This is the first line.\\
This is the second line.

This is a new paragraph.

This is another paragraph.
```

### Page Breaks

| Command | Purpose |
|---|---|
| `\newpage` | Starts a new page. |
| `\pagebreak` | Suggests a page break. |
| `\clearpage` | Starts a new page after processing pending floating figures and tables. |

Example:

```latex
This is the first page.

\newpage

This is the second page.
```

## 7. Lists and Environments

LaTeX provides different environments to organize information into lists.

### 1. Unordered List (`itemize`)

Creates a bulleted list.

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

### 2. Ordered List (`enumerate`)

Creates a numbered list.

```latex
\begin{enumerate}
    \item First item
    \item Second item
    \item Third item
\end{enumerate}
```

### 3. Description List (`description`)

Creates a list containing terms and their descriptions.

```latex
\begin{description}
    \item[LaTeX] Document preparation system.
    \item[Overleaf] Online LaTeX editor.
\end{description}
```

### Nested Lists

Lists can be placed inside other lists.

```latex
\begin{itemize}
    \item Programming Languages
    \begin{enumerate}
        \item C++
        \item Java
    \end{enumerate}
    \item Markup Languages
\end{itemize}
```

### Customizing Lists

The `enumitem` package allows customization of list appearance.

```latex
\usepackage{enumitem}

\begin{enumerate}[label=\alph*)]
    \item First item
    \item Second item
\end{enumerate}
```

This produces an alphabetically labelled list.

**Remember:**
- `itemize` creates bullets.
- `enumerate` creates numbered lists.
- `description` creates term-description lists.
- Every list item begins with `\item`.

## 8. Mathematical Expressions

LaTeX provides powerful commands for writing mathematical expressions, equations and symbols.

### 8.1 Inline Mathematics

Used to include mathematical expressions within a line of text.

```latex
The equation is \(a^2 + b^2 = c^2\).
```

You can also use `$...$` for inline mathematics.

### 8.2 Display Mathematics

Used to display equations separately, centered on the page.

```latex
\[
a^2 + b^2 = c^2
\]
```

### 8.3 Superscripts and Subscripts

| Syntax | Meaning |
|---|---|
| `x^2` | Superscript |
| `x_1` | Subscript |
| `x^{10}` | Multi-character superscript |
| `x_{12}` | Multi-character subscript |

Example:

```latex
\[
x^2 + y_1 + z^{10}
\]
```

### 8.4 Fractions

Use `\frac{numerator}{denominator}`.

```latex
\[
\frac{a+b}{c+d}
\]
```

### 8.5 Square Roots

Use `\sqrt{}` to create a square root.

```latex
\[
\sqrt{x^2+y^2}
\]
```

For other roots:

```latex
\[
\sqrt[3]{x}
\]
```

### 8.6 Greek Letters

Some commonly used Greek symbols:

| Command | Symbol |
|---|---|
| `\alpha` | α |
| `\beta` | β |
| `\gamma` | γ |
| `\delta` | δ |
| `\theta` | θ |
| `\lambda` | λ |
| `\mu` | μ |
| `\pi` | π |
| `\sigma` | σ |
| `\omega` | ω |
| `\Gamma` | Γ |
| `\Delta` | Δ |
| `\Omega` | Ω |

Example:

```latex
\[
\alpha + \beta = \gamma
\]
```

### 8.7 Summation and Product

| Command | Symbol |
|---|---|
| `\sum` | Summation (∑) |
| `\prod` | Product (∏) |
| `\int` | Integral (∫) |

Example:

```latex
\[
\sum_{i=1}^{n} i
\]

\[
\prod_{i=1}^{n} i
\]

\[
\int_0^1 x^2\,dx
\]
```

### 8.8 Common Mathematical Symbols

| Command | Symbol |
|---|---|
| `\times` | × |
| `\div` | ÷ |
| `\

## 9. Arrays and Matrices

LaTeX provides the `array` environment for arranging mathematical expressions in rows and columns. The `amsmath` package provides different matrix environments.

### 9.1 Array Environment

The `array` environment is used to arrange mathematical elements in tabular form.

**Syntax:**

```latex
\begin{array}{column_alignment}
    element & element \\
    element & element
\end{array}
```

Column alignment options:
- `l` – Left aligned
- `c` – Center aligned
- `r` – Right aligned

Example:

```latex
\[
\begin{array}{ccc}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{array}
\]
```

### 9.2 Matrix Environments

The `amsmath` package provides several environments for creating matrices.

| Environment | Appearance |
|---|---|
| `matrix` | No surrounding brackets |
| `pmatrix` | Parentheses ( ) |
| `bmatrix` | Square brackets [ ] |
| `Bmatrix` | Curly braces { } |
| `vmatrix` | Single vertical bars |
| `Vmatrix` | Double vertical bars |

### 9.3 Matrix Examples

**Matrix without brackets:**

```latex
\[
\begin{matrix}
1 & 2 \\
3 & 4
\end{matrix}
\]
```

**Matrix with parentheses:**

```latex
\[
\begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}
\]
```

**Matrix with square brackets:**

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

**Matrix with curly braces:**

```latex
\[
\begin{Bmatrix}
1 & 2 \\
3 & 4
\end{Bmatrix}
\]
```

### 9.4 Important Symbols

- `&` separates columns.
- `\\` starts a new row.
- Each row should contain the appropriate number of elements.

### Important Package

```latex
\usepackage{amsmath}
```

**Remember:** Matrix environments are generally used inside mathematical mode, such as `\[ ... \]`.


Tables are created using the `tabular` environment.

Important commands:

- `&` – Separates columns.
- `\\` – Ends a row.
- `\hline` – Adds a horizontal line.
- `\multicolumn{}` – Combines columns.
- `\multirow{}` – Combines rows.

The `table` environment can be used for captions, labels, and positioning.

## 10. Tables in LaTeX

LaTeX uses the `tabular` environment to create tables consisting of rows and columns.

### 10.1 Basic Table Structure

**Syntax:**

```latex
\begin{tabular}{column_alignment}
    element & element \\
    element & element
\end{tabular}
```

Column alignment:
- `l` – Left aligned
- `c` – Center aligned
- `r` – Right aligned

Important symbols:
- `&` separates columns.
- `\\` ends a row.
- `\hline` creates a horizontal line.

### 10.2 Basic Table Example

```latex
\begin{tabular}{|c|c|c|}
\hline
Name & Age & City \\
\hline
John & 20 & Delhi \\
Alice & 21 & Mumbai \\
\hline
\end{tabular}
```

### 10.3 Table Environment

The `table` environment allows a table to float and provides captions and labels.

```latex
\begin{table}[h]
\centering
\begin{tabular}{|c|c|}
\hline
Subject & Marks \\
\hline
Maths & 90 \\
Science & 85 \\
\hline
\end{tabular}
\caption{Student Marks}
\label{tab:marks}
\end{table}
```

### 10.4 Table Positioning

| Option | Meaning |
|---|---|
| `h` | Place approximately here |
| `t` | Top of page |
| `b` | Bottom of page |
| `p` | Separate page for floats |
| `!` | Relax certain placement restrictions |
| `H` | Place exactly here (requires the `float` package) |

Example:

```latex
\begin{table}[ht]
...
\end{table}
```

### 10.5 Multicolumn

The `\multicolumn` command combines multiple columns into one cell.

**Syntax:**

```latex
\multicolumn{number_of_columns}{alignment}{text}
```

Example:

```latex
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{3}{|c|}{Student Details} \\
\hline
Name & Age & Marks \\
\hline
John & 20 & 90 \\
\hline
\end{tabular}
```

### 10.6 Multirow

The `\multirow` command combines multiple rows into one cell. It requires the `multirow` package.

```latex
\use
```

## 11. Figures and Pictures

The `graphicx` package allows images to be inserted into LaTeX documents.

Important commands:

- `\includegraphics{}` – Inserts an image.
- `\caption{}` – Adds a figure caption.
- `\label{}` – Creates a reference label.
- `\ref{}` – References a figure or table.
- `\scalebox{}` – Resizes an image.

The `figure` environment supports positioning and captions. LaTeX also provides a `picture` environment for creating basic diagrams using commands such as `\put`, `\framebox`, and `\vector`.

## 12. Colours in LaTeX

The `xcolor` package provides colour support.

Important commands:

- `\textcolor{red}{Text}` – Changes text colour.
- `\color{blue}` – Changes the current text colour.
- `\definecolor{}` – Defines custom colours.
- `\colorbox{}` – Adds a coloured background.
- `\fcolorbox{}` – Adds a coloured border and background.
- `\pagecolor{}` – Changes the page background.

## 13. Referen## 10. Tablesces and Learning Resources

The documentation is based primarily on the course materials provided for Technical Writing.

- Introduction to LaTeX (Cntd..)
- Introduction to LaTeX (Mathematical Notations, Equations, Array, Matrices, List)
- Exploring Table Styles in LaTeX
- Introduction to LaTeX (Colours, Figures and Picture Environment)
- FigureHelp1 – Creating Figures and Graphs with LaTeX

