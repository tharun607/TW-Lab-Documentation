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

The `\documentclass{}` command determines the overall structure and appearance of a document.

Common document classes:

| Class | Purpose |
|---|---|
| article | Research papers and short documents |
| report | Reports and academic projects |
| book | Books and dissertations |
| beamer | Presentations |
| letter | Formal letters |
| exam | Question papers and examinations |

## 4. Title Page and Abstract

Important commands:

- `\title{}` – Defines the document title.
- `\author{}` – Specifies the author.
- `\date{}` – Specifies the date.
- `\maketitle` – Generates the title section.
- `\begin{abstract}` – Starts an abstract.

## 5. Text Formatting and Styling

LaTeX supports formatting through commands and packages.

Examples:

- `\textbf{}` – Bold text.
- `\textit{}` – Italic text.
- `\underline{}` – Underlined text.
- `\texttt{}` – Monospaced text.
- `\Huge`, `\Large`, `\small` – Font sizes.

Important styling packages:

- `sectsty` – Customizes section headings.
- `fontspec` – Allows custom system fonts.
- `xcolor` – Provides colour support.
- `fancyhdr` – Customizes headers and footers.

## 6. Text and Page Layout

Important commands:

| Command | Purpose |
|---|---|
| `\\` | Manual line break |
| Blank line | Starts a new paragraph |
| `\par` | Ends a paragraph |
| `\newpage` | Starts a new page |
| `\pagebreak` | Requests a page break |
| `\clearpage` | Flushes pending figures and tables before a page break |
| `\vspace{}` | Adds vertical space |
| `\hspace{}` | Adds horizontal space |

## 7. Lists and Environments

LaTeX provides environments for organizing content.

- `itemize` – Bulleted lists.
- `enumerate` – Numbered lists.
- `description` – Description lists.

The `enumitem` package can customize list appearance, indentation, and labels.

## 8. Mathematical Expressions

LaTeX provides mathematical notation through math mode.

- Inline mathematics: `\( ... \)`
- Display mathematics: `\[ ... \]`

Common mathematical commands:

| Command | Purpose |
|---|---|
| `\frac{a}{b}` | Fractions |
| `\sqrt{x}` | Square root |
| `\sum` | Summation |
| `\prod` | Product |
| `\int` | Integral |
| `\alpha`, `\beta` | Greek letters |
| `\leq`, `\neq` | Mathematical relations |

## 9. Arrays and Matrices

LaTeX supports arrays and different matrix formats.

Common matrix environments:

- `pmatrix` – Parentheses.
- `bmatrix` – Square brackets.
- `Bmatrix` – Curly braces.
- `vmatrix` – Single vertical bars.
- `Vmatrix` – Double vertical bars.

## 10. Tables

Tables are created using the `tabular` environment.

Important commands:

- `&` – Separates columns.
- `\\` – Ends a row.
- `\hline` – Adds a horizontal line.
- `\multicolumn{}` – Combines columns.
- `\multirow{}` – Combines rows.

The `table` environment can be used for captions, labels, and positioning.

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

## 13. References and Learning Resources

The documentation is based primarily on the course materials provided for Technical Writing.

- Introduction to LaTeX (Cntd..)
- Introduction to LaTeX (Mathematical Notations, Equations, Array, Matrices, List)
- Exploring Table Styles in LaTeX
- Introduction to LaTeX (Colours, Figures and Picture Environment)
- FigureHelp1 – Creating Figures and Graphs with LaTeX

