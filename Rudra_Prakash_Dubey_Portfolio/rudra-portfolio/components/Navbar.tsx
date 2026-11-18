'use client';
import { useState } from 'react';
import { Menu, X, ArrowUpRight } from 'lucide-react';
const links=[['About','about'],['Skills','skills'],['Journey','journey'],['Projects','projects'],['Contact','contact']];
export default function Navbar(){const [open,setOpen]=useState(false);return <header className="nav-wrap"><nav className="nav shell" aria-label="Main navigation"><a className="wordmark" href="#home" aria-label="Rudra — home"><span className="wordmark-dot"/>rudra<span className="wordmark-muted">.dev</span></a><div className={`nav-links ${open?'open':''}`}>{links.map(([label,id])=><a key={id} href={`#${id}`} onClick={()=>setOpen(false)}>{label}</a>)}<a className="nav-contact" href="#contact" onClick={()=>setOpen(false)}>Say hello <ArrowUpRight size={15}/></a></div><button className="nav-toggle" onClick={()=>setOpen(!open)} aria-label={open?'Close menu':'Open menu'}>{open?<X/>:<Menu/>}</button></nav></header>}
