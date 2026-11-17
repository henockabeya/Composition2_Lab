# Composition Lab: Multi-File C++ Refactoring (`Book` & `Page`)

**Author:** Henoc Kabeya 
**Course:** CS 272[ 
**Repository:** `Composition2_Lab`

---

## 📌 Overview

This project demonstrates how to refactor a monolithic, single-file C++ program into a clean, modular multi-file architecture. By separating class declarations into header files (`.h`) and member definitions into implementation files (`.cpp`), the codebase achieves better scalability, reusability, and faster compile times.

The program models a **composition / aggregation ("has-a") relationship** in which a `Book` object contains and manages a `Page` object as a private member.

---

## 🏗️ System Architecture & UML Class Diagram

```text
┌──────────────────────────────────────────────────────────┐
│                           Book                           │
├──────────────────────────────────────────────────────────┤
│ - title : string                                         │
│ - author : string                                        │
│ - currentPage : Page                                     │
├──────────────────────────────────────────────────────────┤
│ + Book()                                                 │
│ + Book(t: const string&, a: const string&)               │
│ + setTitle(t: const string&) : void                      │
│ + getTitle() : string                                    │
│ + setAuthor(a: const string&) : void                     │
│ + getAuthor() : string                                   │
│ + setPageDetails(pageNum: int,                           │
│                  pageContent: const string&) : void      │
│ + getCurrentPageNumber() : int                           │
│ + getCurrentPageContent() : string                       │
└────────────────────────────┬─────────────────────────────┘
                             ◆  (Composition / Aggregation)
                             │  1
                             │
                             │  1
                             ▼
┌──────────────────────────────────────────────────────────┐
│                           Page                           │
├──────────────────────────────────────────────────────────┤
│ - pageNumber : int                                       │
│ - content : string                                       │
├──────────────────────────────────────────────────────────┤
│ + Page()                                                 │
│ + Page(num: int, text: const string&)                    │
│ + setPageNumber(num: int) : void                         │
│ + getPageNumber() : int                                  │
│ + setContent(text: const string&) : void                 │
│ + getContent() : string                                  │
└──────────────────────────────────────────────────────────┘
