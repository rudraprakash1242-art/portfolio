'use client';
import { useEffect, useRef } from 'react';
export default function ScrollProgress(){
 const bar=useRef<HTMLSpanElement>(null);
 useEffect(()=>{const update=()=>{const max=document.documentElement.scrollHeight-window.innerHeight;const progress=max>0?window.scrollY/max:0;if(bar.current)bar.current.style.width=`${Math.max(0,Math.min(1,progress))*100}%`;};update();window.addEventListener('scroll',update,{passive:true});window.addEventListener('resize',update);return()=>{window.removeEventListener('scroll',update);window.removeEventListener('resize',update)}},[]);
 return <div className="scroll-progress" aria-hidden="true"><span ref={bar}/></div>;
}
