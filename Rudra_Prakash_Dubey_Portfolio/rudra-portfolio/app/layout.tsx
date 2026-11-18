import type { Metadata } from 'next';
import './globals.scss';
import { profile } from '@/data/portfolio';

export const metadata: Metadata = {
  title: 'Rudra Prakash Dubey | Aspiring AI / ML Engineer',
  description: 'Personal portfolio of Rudra Prakash Dubey — first-year B.Sc. Artificial Intelligence and Machine Learning student, learning Python, C++, and intelligent technology.',
  keywords: ['Rudra Prakash Dubey','AI student','Machine Learning student','Python','C++','Artificial Intelligence','portfolio'],
  authors: [{ name: profile.name }],
  openGraph: { title: 'Rudra Prakash Dubey | AI / ML Student', description: profile.summary, type: 'website' },
  robots: { index: true, follow: true }
};
export default function RootLayout({children}:{children:React.ReactNode}) {
  return <html lang="en"><body>{children}</body></html>;
}
