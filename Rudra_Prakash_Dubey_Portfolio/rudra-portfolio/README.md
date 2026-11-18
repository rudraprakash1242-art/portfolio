# Rudra Prakash Dubey — Personal Portfolio

Premium, responsive portfolio built with Next.js App Router, TypeScript, SCSS and Lucide React. Uses the owner's uploaded photographs and certificate, with no stock people, generated avatars, or brand logos.

## Run locally

1. Install Node.js 20.9+.
2. In this project folder, run `npm install`.
3. Run `npm run dev`.
4. Open http://localhost:3000.

For a production build: `npm run build`, then `npm run start`.

## Deploy

Push the folder to a GitHub repository and import it into Vercel. Framework preset: Next.js. No environment variables are required for the current version. Deploy, then update the canonical URL and Open Graph metadata in `app/layout.tsx` and the `url` field in Person JSON-LD within `components/Portfolio.tsx`.

## Edit your content

- `data/portfolio.ts`: name, email, phone, social links, skills, education, certificate, learning topics, milestones and project data.
- `public/images/profile/`: replace the portrait with your image, retaining the filename or update its path in the component.
- `public/images/gallery/`: your banner and additional personal images.
- `public/images/certificates/`: certificate images.
- `public/documents/`: resume PDF.

Projects: add entries to `projects` in `data/portfolio.ts` and replace the empty-state rendering in `components/Portfolio.tsx` with cards when you have real projects. Do not add fabricated projects.

## Included

- Responsive navigation with mobile menu
- Sections: hero, about, skills, education timeline, roadmap, projects empty state, certificate, photo gallery, contact
- Scroll reveal, hover states, ambient visual accents; reduced-motion support
- Semantic sections, metadata, Person structured data
- Resume download, social links, email/phone links
- Contact form validates fields and prepares a mailto message (no server-side sending)
- Optimized WebP image assets

## Accuracy notes

The resume supplied lists current skills as basic Python, C++ learning, programming fundamentals, logical thinking, and introductory AI/ML concepts. The displayed information reflects this. Expected college graduation date was not supplied and is omitted. The HSC score and other sensitive document details are not shown.
